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

// Function: sub_0029D530
// Address: 0x29d530 - 0x29d598
void sub_0029D530_0x29d530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D530_0x29d530");
#endif

    ctx->pc = 0x29d530u;

    // 0x29d530: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x29d530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x29d534: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x29D534u;
    {
        const bool branch_taken_0x29d534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D534u;
        // 0x29d538: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d534) {
            ctx->pc = 0x29D58Cu;
            goto label_29d58c;
        }
    }
    ctx->pc = 0x29D53Cu;
    // 0x29d53c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x29d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29d540: 0x14a20012  bne         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x29D540u;
    {
        const bool branch_taken_0x29d540 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x29D544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D540u;
        // 0x29d544: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d540) {
            ctx->pc = 0x29D58Cu;
            goto label_29d58c;
        }
    }
    ctx->pc = 0x29D548u;
    // 0x29d548: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x29D548u;
    {
        const bool branch_taken_0x29d548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D548u;
        // 0x29d54c: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d548) {
            ctx->pc = 0x29D58Cu;
            goto label_29d58c;
        }
    }
    ctx->pc = 0x29D550u;
    // 0x29d550: 0x8c850150  lw          $a1, 0x150($a0)
    ctx->pc = 0x29d550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x29d554: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x29d554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x29d558: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x29d558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x29d55c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29d560: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x29d560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x29d564: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29d564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29d568: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29D568u;
    {
        const bool branch_taken_0x29d568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x29d568) {
            ctx->pc = 0x29D58Cu;
            goto label_29d58c;
        }
    }
    ctx->pc = 0x29D570u;
    // 0x29d570: 0xc4a200d4  lwc1        $f2, 0xD4($a1)
    ctx->pc = 0x29d570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29d574: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x29d574u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29d578: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29d578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29d57c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29d57cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d580: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x29d580u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d584: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x29D584u;
    {
        const bool branch_taken_0x29d584 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d584) {
            ctx->pc = 0x29D588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D584u;
            // 0x29d588: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D58Cu;
            goto label_29d58c;
        }
    }
    ctx->pc = 0x29D58Cu;
label_29d58c:
    // 0x29d58c: 0x3e00008  jr          $ra
    ctx->pc = 0x29D58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D58Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D594u;
    // 0x29d594: 0x0  nop
    ctx->pc = 0x29d594u;
    // NOP
    ctx->pc = 0x29d598u;
}
