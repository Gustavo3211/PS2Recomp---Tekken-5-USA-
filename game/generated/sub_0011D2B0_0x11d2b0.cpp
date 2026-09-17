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

// Function: sub_0011D2B0
// Address: 0x11d2b0 - 0x11d340
void sub_0011D2B0_0x11d2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D2B0_0x11d2b0");
#endif

    ctx->pc = 0x11d2b0u;

    // 0x11d2b0: 0x44066000  mfc1        $a2, $f12
    ctx->pc = 0x11d2b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x11d2b4: 0x615c3  sra         $v0, $a2, 23
    ctx->pc = 0x11d2b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 23));
    // 0x11d2b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11d2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11d2bc: 0x2445ff81  addiu       $a1, $v0, -0x7F
    ctx->pc = 0x11d2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x11d2c0: 0x28a30017  slti        $v1, $a1, 0x17
    ctx->pc = 0x11d2c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x11d2c4: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x11D2C4u;
    {
        const bool branch_taken_0x11d2c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D2C4u;
        // 0x11d2c8: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d2c4) {
            ctx->pc = 0x11D320u;
            goto label_11d320;
        }
    }
    ctx->pc = 0x11D2CCu;
    // 0x11d2cc: 0x4a10008  bgez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x11D2CCu;
    {
        const bool branch_taken_0x11d2cc = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x11D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D2CCu;
        // 0x11d2d0: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d2cc) {
            ctx->pc = 0x11D2F0u;
            goto label_11d2f0;
        }
    }
    ctx->pc = 0x11D2D4u;
    // 0x11d2d4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x11d2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x11d2d8: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x11d2d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x11d2dc: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x11d2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x11d2e0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x11d2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d2e4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11D2E4u;
    {
        const bool branch_taken_0x11d2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D2E4u;
        // 0x11d2e8: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d2e4) {
            ctx->pc = 0x11D330u;
            goto label_11d330;
        }
    }
    ctx->pc = 0x11D2ECu;
    // 0x11d2ec: 0x0  nop
    ctx->pc = 0x11d2ecu;
    // NOP
label_11d2f0:
    // 0x11d2f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11d2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11d2f4: 0xa21007  srav        $v0, $v0, $a1
    ctx->pc = 0x11d2f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x11d2f8: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x11d2f8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x11d2fc: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x11d2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x11d300: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x11d300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x11d304: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11D304u;
    {
        const bool branch_taken_0x11d304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D304u;
        // 0x11d308: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d304) {
            ctx->pc = 0x11D320u;
            goto label_11d320;
        }
    }
    ctx->pc = 0x11D30Cu;
    // 0x11d30c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x11d30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d310: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x11d310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x11d314: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11D314u;
    {
        const bool branch_taken_0x11d314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D314u;
        // 0x11d318: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d314) {
            ctx->pc = 0x11D334u;
            goto label_11d334;
        }
    }
    ctx->pc = 0x11D31Cu;
    // 0x11d31c: 0x0  nop
    ctx->pc = 0x11d31cu;
    // NOP
label_11d320:
    // 0x11d320: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x11d320u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x11d324: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x11d324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x11d328: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x11d328u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x11d32c: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x11d32cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_11d330:
    // 0x11d330: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x11d330u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
label_11d334:
    // 0x11d334: 0x3e00008  jr          $ra
    ctx->pc = 0x11D334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D334u;
        // 0x11d338: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D33Cu;
    // 0x11d33c: 0x0  nop
    ctx->pc = 0x11d33cu;
    // NOP
    ctx->pc = 0x11d340u;
}
