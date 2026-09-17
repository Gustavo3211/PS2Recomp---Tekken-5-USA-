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

// Function: sub_00360508
// Address: 0x360508 - 0x360590
void sub_00360508_0x360508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360508_0x360508");
#endif

    switch (ctx->pc) {
        case 0x36053cu: goto label_36053c;
        case 0x360558u: goto label_360558;
        default: break;
    }

    ctx->pc = 0x360508u;

    // 0x360508: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x360508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x36050c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x36050cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360510: 0x46006086  mov.s       $f2, $f12
    ctx->pc = 0x360510u;
    ctx->f[2] = FPU_MOV_S(ctx->f[12]);
    // 0x360514: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x360514u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x360518: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x360518u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
    // 0x36051c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x36051cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x360520: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x360520u;
    {
        const bool branch_taken_0x360520 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x360524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360520u;
        // 0x360524: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360520) {
            ctx->pc = 0x360580u;
            goto label_360580;
        }
    }
    ctx->pc = 0x360528u;
    // 0x360528: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x360528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36052c: 0x54820006  bnel        $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36052Cu;
    {
        const bool branch_taken_0x36052c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x36052c) {
            ctx->pc = 0x360530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36052Cu;
            // 0x360530: 0x8f82c7e8  lw          $v0, -0x3818($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952936)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x360548u;
            goto label_360548;
        }
    }
    ctx->pc = 0x360534u;
    // 0x360534: 0xc0d8082  jal         func_360208
    ctx->pc = 0x360534u;
    SET_GPR_U32(ctx, 31, 0x36053Cu);
    ctx->pc = 0x360208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360208u, 0x360534u, 0x36053Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36053Cu;
label_36053c:
    // 0x36053c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x36053Cu;
    {
        const bool branch_taken_0x36053c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36053c) {
            ctx->pc = 0x360558u;
            goto label_360558;
        }
    }
    ctx->pc = 0x360544u;
    // 0x360544: 0x0  nop
    ctx->pc = 0x360544u;
    // NOP
label_360548:
    // 0x360548: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x360548u;
    {
        const bool branch_taken_0x360548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x360548) {
            ctx->pc = 0x36054Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x360548u;
            // 0x36054c: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x360580u;
            goto label_360580;
        }
    }
    ctx->pc = 0x360550u;
    // 0x360550: 0xc0d80a6  jal         func_360298
    ctx->pc = 0x360550u;
    SET_GPR_U32(ctx, 31, 0x360558u);
    ctx->pc = 0x360298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360298u, 0x360550u, 0x360558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360558u;
label_360558:
    // 0x360558: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x360558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x36055c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x36055cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x360560: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x360560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360564: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x360564u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x360568: 0x0  nop
    ctx->pc = 0x360568u;
    // NOP
    // 0x36056c: 0x0  nop
    ctx->pc = 0x36056cu;
    // NOP
    // 0x360570: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x360570u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x360574: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x360574u;
    {
        const bool branch_taken_0x360574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360574u;
        // 0x360578: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360574) {
            ctx->pc = 0x360584u;
            goto label_360584;
        }
    }
    ctx->pc = 0x36057Cu;
    // 0x36057c: 0x0  nop
    ctx->pc = 0x36057cu;
    // NOP
label_360580:
    // 0x360580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x360580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_360584:
    // 0x360584: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x360584u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x360588: 0x3e00008  jr          $ra
    ctx->pc = 0x360588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360588u;
        // 0x36058c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360590u;
}
