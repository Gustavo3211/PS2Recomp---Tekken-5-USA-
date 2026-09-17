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

// Function: sub_004B4510
// Address: 0x4b4510 - 0x4b4570
void sub_004B4510_0x4b4510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B4510_0x4b4510");
#endif

    ctx->pc = 0x4b4510u;

    // 0x4b4510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b4510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b4514: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4b4514u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4b4518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b4518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b451c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x4b451cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4520: 0x24e70d3c  addiu       $a3, $a3, 0xD3C
    ctx->pc = 0x4b4520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3388));
    // 0x4b4524: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4b4524u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4b4528: 0x85250118  lh          $a1, 0x118($t1)
    ctx->pc = 0x4b4528u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 280)));
    // 0x4b452c: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4b452cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4b4530: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4b4530u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0D3Cu));
    // 0x4b4534: 0x24c60d40  addiu       $a2, $a2, 0xD40
    ctx->pc = 0x4b4534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3392));
    // 0x4b4538: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x4b4538u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x4b453c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4b453cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D40u));
    // 0x4b4540: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b4540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b4544: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b4544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b4548: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4b4548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4b454c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b454cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b4550: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4b4550u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4b4554: 0x8522011c  lh          $v0, 0x11C($t1)
    ctx->pc = 0x4b4554u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 284)));
    // 0x4b4558: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4b4558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4b455c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b455cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b4560: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4b4560u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4b4564: 0x812d1b0  j           func_4B46C0
    ctx->pc = 0x4B4564u;
    ctx->pc = 0x4B4568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4564u;
    // 0x4b4568: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B46C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B46C0u, 0x4B4564u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4B456Cu;
    // 0x4b456c: 0x0  nop
    ctx->pc = 0x4b456cu;
    // NOP
    ctx->pc = 0x4b4570u;
}
