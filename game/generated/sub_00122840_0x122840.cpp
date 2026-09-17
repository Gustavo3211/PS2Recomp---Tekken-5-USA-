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

// Function: sub_00122840
// Address: 0x122840 - 0x1228a8
void sub_00122840_0x122840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122840_0x122840");
#endif

    switch (ctx->pc) {
        case 0x122864u: goto label_122864;
        case 0x122878u: goto label_122878;
        default: break;
    }

    ctx->pc = 0x122840u;

    // 0x122840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x122840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x122844: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x122844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x122848: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x122848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12284c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12284cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x122850: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x122850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122854: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x122854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x122858: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x122858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12285c: 0xc0489ec  jal         func_1227B0
    ctx->pc = 0x12285Cu;
    SET_GPR_U32(ctx, 31, 0x122864u);
    ctx->pc = 0x122860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12285Cu;
    // 0x122860: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1227B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1227B0u, 0x12285Cu, 0x122864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122864u;
label_122864:
    // 0x122864: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x122864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122868: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x122868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12286c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12286cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122870: 0xc0489ec  jal         func_1227B0
    ctx->pc = 0x122870u;
    SET_GPR_U32(ctx, 31, 0x122878u);
    ctx->pc = 0x122874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122870u;
    // 0x122874: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1227B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1227B0u, 0x122870u, 0x122878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122878u;
label_122878:
    // 0x122878: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x122878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12287c: 0x3c06001f  lui         $a2, 0x1F
    ctx->pc = 0x12287cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)31 << 16));
    // 0x122880: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x122880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x122884: 0x80c6fbf8  lb          $a2, -0x408($a2)
    ctx->pc = 0x122884u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294966264)));
    // 0x122888: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12288c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12288cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122890: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x122890u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x122894: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x122894u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122898: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x122898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12289c: 0x804a125  j           func_128494
    ctx->pc = 0x12289Cu;
    ctx->pc = 0x1228A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12289Cu;
    // 0x1228a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128494u;
    sub_00128494_0x128494(rdram, ctx, runtime); return;
    ctx->pc = 0x1228A4u;
    // 0x1228a4: 0x0  nop
    ctx->pc = 0x1228a4u;
    // NOP
    ctx->pc = 0x1228a8u;
}
