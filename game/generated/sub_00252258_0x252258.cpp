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

// Function: sub_00252258
// Address: 0x252258 - 0x2522e0
void sub_00252258_0x252258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252258_0x252258");
#endif

    ctx->pc = 0x252258u;

    // 0x252258: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x252258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x25225c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25225cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x252260: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x252260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x252264: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x252264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252268: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x252268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25226c: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x25226cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x252270: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x252270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x252274: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x252274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x252278: 0xe4c00030  swc1        $f0, 0x30($a2)
    ctx->pc = 0x252278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
    // 0x25227c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x25227cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252280: 0xe4c00034  swc1        $f0, 0x34($a2)
    ctx->pc = 0x252280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 52), bits); }
    // 0x252284: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x252284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252288: 0xe4c10038  swc1        $f1, 0x38($a2)
    ctx->pc = 0x252288u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
    // 0x25228c: 0xc4a00044  lwc1        $f0, 0x44($a1)
    ctx->pc = 0x25228cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252290: 0xc4a10050  lwc1        $f1, 0x50($a1)
    ctx->pc = 0x252290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252294: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x252294u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x252298: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x252298u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x25229c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x25229cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2522a0: 0xe4c2003c  swc1        $f2, 0x3C($a2)
    ctx->pc = 0x2522a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 60), bits); }
    // 0x2522a4: 0x90a30058  lbu         $v1, 0x58($a1)
    ctx->pc = 0x2522a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x2522a8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2522A8u;
    {
        const bool branch_taken_0x2522a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2522ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2522A8u;
        // 0x2522ac: 0x28640002  slti        $a0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2522a8) {
            ctx->pc = 0x2522D8u;
            goto label_2522d8;
        }
    }
    ctx->pc = 0x2522B0u;
    // 0x2522b0: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2522B0u;
    {
        const bool branch_taken_0x2522b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2522B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2522B0u;
        // 0x2522b4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2522b0) {
            ctx->pc = 0x2522D8u;
            goto label_2522d8;
        }
    }
    ctx->pc = 0x2522B8u;
    // 0x2522b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2522b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2522bc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2522BCu;
    {
        const bool branch_taken_0x2522bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2522C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2522BCu;
        // 0x2522c0: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2522bc) {
            ctx->pc = 0x2522D8u;
            goto label_2522d8;
        }
    }
    ctx->pc = 0x2522C4u;
    // 0x2522c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2522c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2522c8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2522C8u;
    {
        const bool branch_taken_0x2522c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2522CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2522C8u;
        // 0x2522cc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2522c8) {
            ctx->pc = 0x2522D8u;
            goto label_2522d8;
        }
    }
    ctx->pc = 0x2522D0u;
    // 0x2522d0: 0xacc0003c  sw          $zero, 0x3C($a2)
    ctx->pc = 0x2522d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 0));
    // 0x2522d4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2522d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2522d8:
    // 0x2522d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2522D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2522DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2522D8u;
        // 0x2522dc: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2522D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2522E0u;
}
