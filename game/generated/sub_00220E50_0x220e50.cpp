#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00220E50
// Address: 0x220e50 - 0x220f10
void sub_00220E50_0x220e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220E50_0x220e50");
#endif

    switch (ctx->pc) {
        case 0x220e64u: goto label_220e64;
        case 0x220e80u: goto label_220e80;
        default: break;
    }

    ctx->pc = 0x220e50u;

    // 0x220e50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x220e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x220e54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x220e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x220e58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x220e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x220e5c: 0xc0881b8  jal         func_2206E0
    ctx->pc = 0x220E5Cu;
    SET_GPR_U32(ctx, 31, 0x220E64u);
    ctx->pc = 0x220E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220E5Cu;
    // 0x220e60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2206E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2206E0u, 0x220E5Cu, 0x220E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220E64u;
label_220e64:
    // 0x220e64: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x220e64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220e68: 0x4c00025  bltz        $a2, . + 4 + (0x25 << 2)
    ctx->pc = 0x220E68u;
    {
        const bool branch_taken_0x220e68 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x220E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220E68u;
        // 0x220e6c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220e68) {
            ctx->pc = 0x220F00u;
            goto label_220f00;
        }
    }
    ctx->pc = 0x220E70u;
    // 0x220e70: 0xc783849c  lwc1        $f3, -0x7B64($gp)
    ctx->pc = 0x220e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x220e74: 0x2444d3b0  addiu       $a0, $v0, -0x2C50
    ctx->pc = 0x220e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955952));
    // 0x220e78: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x220e78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220e7c: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x220e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_220e80:
    // 0x220e80: 0x5466001c  bnel        $v1, $a2, . + 4 + (0x1C << 2)
    ctx->pc = 0x220E80u;
    {
        const bool branch_taken_0x220e80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x220e80) {
            ctx->pc = 0x220E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220E80u;
            // 0x220e84: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x220EF4u;
            goto label_220ef4;
        }
    }
    ctx->pc = 0x220E88u;
    // 0x220e88: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x220e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x220e8c: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x220e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x220e90: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x220e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x220e94: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x220e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x220e98: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x220e98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x220e9c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x220e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x220ea0: 0x46020868  max.s       $f1, $f1, $f2
    ctx->pc = 0x220ea0u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[2]);
    // 0x220ea4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x220ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220ea8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x220ea8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x220eac: 0x46000869  min.s       $f1, $f1, $f0
    ctx->pc = 0x220eacu;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[0]);
    // 0x220eb0: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x220eb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x220eb4: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x220eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x220eb8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x220eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220ebc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x220ebcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x220ec0: 0x460010a8  max.s       $f2, $f2, $f0
    ctx->pc = 0x220ec0u;
    ctx->f[2] = std::max(ctx->f[2], ctx->f[0]);
    // 0x220ec4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x220ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x220ec8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x220ec8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x220ecc: 0x460110a9  min.s       $f2, $f2, $f1
    ctx->pc = 0x220eccu;
    ctx->f[2] = std::min(ctx->f[2], ctx->f[1]);
    // 0x220ed0: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x220ed0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x220ed4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x220ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220ed8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x220ed8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x220edc: 0x460010a8  max.s       $f2, $f2, $f0
    ctx->pc = 0x220edcu;
    ctx->f[2] = std::max(ctx->f[2], ctx->f[0]);
    // 0x220ee0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x220ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x220ee4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x220ee4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x220ee8: 0x460110a9  min.s       $f2, $f2, $f1
    ctx->pc = 0x220ee8u;
    ctx->f[2] = std::min(ctx->f[2], ctx->f[1]);
    // 0x220eec: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x220eecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x220ef0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x220ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_220ef4:
    // 0x220ef4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x220ef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x220ef8: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x220EF8u;
    {
        const bool branch_taken_0x220ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x220ef8) {
            ctx->pc = 0x220E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220e80;
        }
    }
    ctx->pc = 0x220F00u;
label_220f00:
    // 0x220f00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220f00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220f04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x220f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x220f08: 0x3e00008  jr          $ra
    ctx->pc = 0x220F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220F08u;
        // 0x220f0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220F10u;
}
