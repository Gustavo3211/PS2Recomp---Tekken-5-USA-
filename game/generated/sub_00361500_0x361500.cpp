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

// Function: sub_00361500
// Address: 0x361500 - 0x3615a0
void sub_00361500_0x361500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00361500_0x361500");
#endif

    switch (ctx->pc) {
        case 0x361520u: goto label_361520;
        case 0x361558u: goto label_361558;
        case 0x361570u: goto label_361570;
        case 0x361580u: goto label_361580;
        case 0x361588u: goto label_361588;
        default: break;
    }

    ctx->pc = 0x361500u;

    // 0x361500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x361500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x361504: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x361504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x361508: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x361508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36150c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x36150Cu;
    {
        const bool branch_taken_0x36150c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x361510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36150Cu;
        // 0x361510: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36150c) {
            ctx->pc = 0x361530u;
            goto label_361530;
        }
    }
    ctx->pc = 0x361514u;
    // 0x361514: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x361514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x361518: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x361518u;
    SET_GPR_U32(ctx, 31, 0x361520u);
    ctx->pc = 0x36151Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361518u;
    // 0x36151c: 0x24846e08  addiu       $a0, $a0, 0x6E08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x361518u, 0x361520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361520u;
label_361520:
    // 0x361520: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x361520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x361524: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x361524u;
    {
        const bool branch_taken_0x361524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361524u;
        // 0x361528: 0x3442001a  ori         $v0, $v0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x361524) {
            ctx->pc = 0x36158Cu;
            goto label_36158c;
        }
    }
    ctx->pc = 0x36152Cu;
    // 0x36152c: 0x0  nop
    ctx->pc = 0x36152cu;
    // NOP
label_361530:
    // 0x361530: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x361530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x361534: 0x8f82c7f0  lw          $v0, -0x3810($gp)
    ctx->pc = 0x361534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952944)));
    // 0x361538: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x361538u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x36153c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36153Cu;
    {
        const bool branch_taken_0x36153c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x361540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36153Cu;
        // 0x361540: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36153c) {
            ctx->pc = 0x36154Cu;
            goto label_36154c;
        }
    }
    ctx->pc = 0x361544u;
    // 0x361544: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x361544u;
    {
        const bool branch_taken_0x361544 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x361544) {
            ctx->pc = 0x361568u;
            goto label_361568;
        }
    }
    ctx->pc = 0x36154Cu;
label_36154c:
    // 0x36154c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x36154cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x361550: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x361550u;
    SET_GPR_U32(ctx, 31, 0x361558u);
    ctx->pc = 0x361554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361550u;
    // 0x361554: 0x24846e40  addiu       $a0, $a0, 0x6E40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x361550u, 0x361558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361558u;
label_361558:
    // 0x361558: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x361558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x36155c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x36155Cu;
    {
        const bool branch_taken_0x36155c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36155Cu;
        // 0x361560: 0x34420014  ori         $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36155c) {
            ctx->pc = 0x36158Cu;
            goto label_36158c;
        }
    }
    ctx->pc = 0x361564u;
    // 0x361564: 0x0  nop
    ctx->pc = 0x361564u;
    // NOP
label_361568:
    // 0x361568: 0xc0d751a  jal         func_35D468
    ctx->pc = 0x361568u;
    SET_GPR_U32(ctx, 31, 0x361570u);
    ctx->pc = 0x35D468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D468u, 0x361568u, 0x361570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361570u;
label_361570:
    // 0x361570: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x361570u;
    {
        const bool branch_taken_0x361570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x361574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361570u;
        // 0x361574: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361570) {
            ctx->pc = 0x361580u;
            goto label_361580;
        }
    }
    ctx->pc = 0x361578u;
    // 0x361578: 0xc0d8574  jal         func_3615D0
    ctx->pc = 0x361578u;
    SET_GPR_U32(ctx, 31, 0x361580u);
    ctx->pc = 0x3615D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3615D0u, 0x361578u, 0x361580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361580u;
label_361580:
    // 0x361580: 0xc0d92c8  jal         func_364B20
    ctx->pc = 0x361580u;
    SET_GPR_U32(ctx, 31, 0x361588u);
    ctx->pc = 0x361584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361580u;
    // 0x361584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364B20u, 0x361580u, 0x361588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361588u;
label_361588:
    // 0x361588: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x361588u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36158c:
    // 0x36158c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36158cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x361590: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x361590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x361594: 0x3e00008  jr          $ra
    ctx->pc = 0x361594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361594u;
        // 0x361598: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36159Cu;
    // 0x36159c: 0x0  nop
    ctx->pc = 0x36159cu;
    // NOP
    ctx->pc = 0x3615a0u;
}
