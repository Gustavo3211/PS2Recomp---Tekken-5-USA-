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

// Function: sub_004EF438
// Address: 0x4ef438 - 0x4ef488
void sub_004EF438_0x4ef438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EF438_0x4ef438");
#endif

    switch (ctx->pc) {
        case 0x4ef44cu: goto label_4ef44c;
        default: break;
    }

    ctx->pc = 0x4ef438u;

    // 0x4ef438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ef438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ef43c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ef43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ef440: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4ef440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4ef444: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4EF444u;
    SET_GPR_U32(ctx, 31, 0x4EF44Cu);
    ctx->pc = 0x4EF448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EF444u;
    // 0x4ef448: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4EF444u, 0x4EF44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EF44Cu;
label_4ef44c:
    // 0x4ef44c: 0x240504c1  addiu       $a1, $zero, 0x4C1
    ctx->pc = 0x4ef44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1217));
    // 0x4ef450: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x4ef450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x4ef454: 0xac500140  sw          $s0, 0x140($v0)
    ctx->pc = 0x4ef454u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 16));
    // 0x4ef458: 0x260601bc  addiu       $a2, $s0, 0x1BC
    ctx->pc = 0x4ef458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4ef45c: 0xa4450160  sh          $a1, 0x160($v0)
    ctx->pc = 0x4ef45cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 352), (uint16_t)GPR_U32(ctx, 5));
    // 0x4ef460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ef460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ef464: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4ef464u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ef468: 0xa445015e  sh          $a1, 0x15E($v0)
    ctx->pc = 0x4ef468u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 350), (uint16_t)GPR_U32(ctx, 5));
    // 0x4ef46c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ef46cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ef470: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4ef470u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ef474: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ef474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ef478: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ef478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ef47c: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4ef47cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ef480: 0x813bd22  j           func_4EF488
    ctx->pc = 0x4EF480u;
    ctx->pc = 0x4EF484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EF480u;
    // 0x4ef484: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF488u;
    sub_004EF488_0x4ef488(rdram, ctx, runtime); return;
    ctx->pc = 0x4EF488u;
}
