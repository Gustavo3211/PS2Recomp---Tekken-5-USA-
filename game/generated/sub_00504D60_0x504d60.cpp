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

// Function: sub_00504D60
// Address: 0x504d60 - 0x504dc8
void sub_00504D60_0x504d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00504D60_0x504d60");
#endif

    switch (ctx->pc) {
        case 0x504d88u: goto label_504d88;
        case 0x504d9cu: goto label_504d9c;
        default: break;
    }

    ctx->pc = 0x504d60u;

    // 0x504d60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x504d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x504d64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x504d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x504d68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x504d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x504d6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x504d6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504d70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x504d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x504d74: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x504d74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504d78: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x504d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x504d7c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x504d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x504d80: 0xc144abc  jal         func_512AF0
    ctx->pc = 0x504D80u;
    SET_GPR_U32(ctx, 31, 0x504D88u);
    ctx->pc = 0x504D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504D80u;
    // 0x504d84: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512AF0u, 0x504D80u, 0x504D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504D88u;
label_504d88:
    // 0x504d88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x504d88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504d8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x504d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504d94: 0xc1412be  jal         func_504AF8
    ctx->pc = 0x504D94u;
    SET_GPR_U32(ctx, 31, 0x504D9Cu);
    ctx->pc = 0x504D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504D94u;
    // 0x504d98: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x504AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x504AF8u, 0x504D94u, 0x504D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504D9Cu;
label_504d9c:
    // 0x504d9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504da0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x504da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504da4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x504da4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x504da8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x504da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504dac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x504dacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x504db0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x504db0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x504db4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x504db4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x504db8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x504db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x504dbc: 0x81412fe  j           func_504BF8
    ctx->pc = 0x504DBCu;
    ctx->pc = 0x504DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504DBCu;
    // 0x504dc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x504BF8u;
    sub_00504BF8_0x504bf8(rdram, ctx, runtime); return;
    ctx->pc = 0x504DC4u;
    // 0x504dc4: 0x0  nop
    ctx->pc = 0x504dc4u;
    // NOP
    ctx->pc = 0x504dc8u;
}
