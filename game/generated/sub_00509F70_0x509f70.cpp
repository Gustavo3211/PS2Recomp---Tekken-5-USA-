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

// Function: sub_00509F70
// Address: 0x509f70 - 0x509fe8
void sub_00509F70_0x509f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00509F70_0x509f70");
#endif

    switch (ctx->pc) {
        case 0x509f90u: goto label_509f90;
        case 0x509f9cu: goto label_509f9c;
        case 0x509fa4u: goto label_509fa4;
        default: break;
    }

    ctx->pc = 0x509f70u;

    // 0x509f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x509f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x509f74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x509f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x509f78: 0x3c10008f  lui         $s0, 0x8F
    ctx->pc = 0x509f78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)143 << 16));
    // 0x509f7c: 0x2610c5fa  addiu       $s0, $s0, -0x3A06
    ctx->pc = 0x509f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952442));
    // 0x509f80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x509f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x509f84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x509f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x509f88: 0xc14277c  jal         func_509DF0
    ctx->pc = 0x509F88u;
    SET_GPR_U32(ctx, 31, 0x509F90u);
    ctx->pc = 0x509F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x509F88u;
    // 0x509f8c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x509DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x509DF0u, 0x509F88u, 0x509F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x509F90u;
label_509f90:
    // 0x509f90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x509f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x509f94: 0xc1426de  jal         func_509B78
    ctx->pc = 0x509F94u;
    SET_GPR_U32(ctx, 31, 0x509F9Cu);
    ctx->pc = 0x509F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x509F94u;
    // 0x509f98: 0xa6000000  sh          $zero, 0x0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x509B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x509B78u, 0x509F94u, 0x509F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x509F9Cu;
label_509f9c:
    // 0x509f9c: 0xc142716  jal         func_509C58
    ctx->pc = 0x509F9Cu;
    SET_GPR_U32(ctx, 31, 0x509FA4u);
    ctx->pc = 0x509FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x509F9Cu;
    // 0x509fa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x509C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x509C58u, 0x509F9Cu, 0x509FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x509FA4u;
label_509fa4:
    // 0x509fa4: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x509fa4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x509fa8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x509fa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x509fac: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x509FACu;
    {
        const bool branch_taken_0x509fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x509FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x509FACu;
        // 0x509fb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x509fac) {
            ctx->pc = 0x509FD8u;
            goto label_509fd8;
        }
    }
    ctx->pc = 0x509FB4u;
    // 0x509fb4: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x509fb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x509fb8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x509FB8u;
    {
        const bool branch_taken_0x509fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x509FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x509FB8u;
        // 0x509fbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x509fb8) {
            ctx->pc = 0x509FD8u;
            goto label_509fd8;
        }
    }
    ctx->pc = 0x509FC0u;
    // 0x509fc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x509fc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x509fc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x509fc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x509fc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x509fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x509fcc: 0x8144af2  j           func_512BC8
    ctx->pc = 0x509FCCu;
    ctx->pc = 0x509FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x509FCCu;
    // 0x509fd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512BC8u;
    sub_00512BC8_0x512bc8(rdram, ctx, runtime); return;
    ctx->pc = 0x509FD4u;
    // 0x509fd4: 0x0  nop
    ctx->pc = 0x509fd4u;
    // NOP
label_509fd8:
    // 0x509fd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x509fd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x509fdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x509fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x509fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x509FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x509FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x509FE0u;
        // 0x509fe4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x509FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x509FE8u;
}
