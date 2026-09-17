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

// Function: sub_0031CD00
// Address: 0x31cd00 - 0x31cd58
void sub_0031CD00_0x31cd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031CD00_0x31cd00");
#endif

    switch (ctx->pc) {
        case 0x31cd24u: goto label_31cd24;
        case 0x31cd38u: goto label_31cd38;
        default: break;
    }

    ctx->pc = 0x31cd00u;

    // 0x31cd00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31cd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31cd04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31cd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31cd08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31cd08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cd0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31cd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31cd10: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x31cd10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cd14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x31cd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x31cd18: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x31cd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x31cd1c: 0xc0c725a  jal         func_31C968
    ctx->pc = 0x31CD1Cu;
    SET_GPR_U32(ctx, 31, 0x31CD24u);
    ctx->pc = 0x31CD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CD1Cu;
    // 0x31cd20: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C968u, 0x31CD1Cu, 0x31CD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CD24u;
label_31cd24:
    // 0x31cd24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31cd24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cd28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31cd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cd2c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x31cd2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cd30: 0xc0c7356  jal         func_31CD58
    ctx->pc = 0x31CD30u;
    SET_GPR_U32(ctx, 31, 0x31CD38u);
    ctx->pc = 0x31CD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CD30u;
    // 0x31cd34: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CD58u, 0x31CD30u, 0x31CD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CD38u;
label_31cd38:
    // 0x31cd38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31cd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cd3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31cd3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31cd40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31cd40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cd44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31cd44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31cd48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x31cd48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31cd4c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x31cd4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31cd50: 0x80c72f4  j           func_31CBD0
    ctx->pc = 0x31CD50u;
    ctx->pc = 0x31CD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CD50u;
    // 0x31cd54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CBD0u, 0x31CD50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x31CD58u;
}
