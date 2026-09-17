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

// Function: sub_004A3918
// Address: 0x4a3918 - 0x4a3950
void sub_004A3918_0x4a3918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A3918_0x4a3918");
#endif

    switch (ctx->pc) {
        case 0x4a392cu: goto label_4a392c;
        case 0x4a3934u: goto label_4a3934;
        case 0x4a393cu: goto label_4a393c;
        default: break;
    }

    ctx->pc = 0x4a3918u;

    // 0x4a3918: 0x3c040006  lui         $a0, 0x6
    ctx->pc = 0x4a3918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)6 << 16));
    // 0x4a391c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a391cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a3920: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a3920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a3924: 0xc124910  jal         func_492440
    ctx->pc = 0x4A3924u;
    SET_GPR_U32(ctx, 31, 0x4A392Cu);
    ctx->pc = 0x4A3928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3924u;
    // 0x4a3928: 0x34840001  ori         $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x4A3924u, 0x4A392Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A392Cu;
label_4a392c:
    // 0x4a392c: 0xc124910  jal         func_492440
    ctx->pc = 0x4A392Cu;
    SET_GPR_U32(ctx, 31, 0x4A3934u);
    ctx->pc = 0x4A3930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A392Cu;
    // 0x4a3930: 0x3c040002  lui         $a0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x4A392Cu, 0x4A3934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3934u;
label_4a3934:
    // 0x4a3934: 0xc12925a  jal         func_4A4968
    ctx->pc = 0x4A3934u;
    SET_GPR_U32(ctx, 31, 0x4A393Cu);
    ctx->pc = 0x4A3938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3934u;
    // 0x4a3938: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4968u, 0x4A3934u, 0x4A393Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A393Cu;
label_4a393c:
    // 0x4a393c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x4a393cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4a3940: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a3940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3944: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x4a3944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4a3948: 0x8123bdc  j           func_48EF70
    ctx->pc = 0x4A3948u;
    ctx->pc = 0x4A394Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3948u;
    // 0x4a394c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EF70u;
    sub_0048EF70_0x48ef70(rdram, ctx, runtime); return;
    ctx->pc = 0x4A3950u;
}
