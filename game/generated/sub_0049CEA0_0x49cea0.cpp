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

// Function: sub_0049CEA0
// Address: 0x49cea0 - 0x49cf18
void sub_0049CEA0_0x49cea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049CEA0_0x49cea0");
#endif

    ctx->pc = 0x49cea0u;

    // 0x49cea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49cea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49cea4: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x49cea4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x49cea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49cea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49ceac: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x49ceacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x49ceb0: 0x24c60ba4  addiu       $a2, $a2, 0xBA4
    ctx->pc = 0x49ceb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2980));
    // 0x49ceb4: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x49ceb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x49ceb8: 0x94830118  lhu         $v1, 0x118($a0)
    ctx->pc = 0x49ceb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x49cebc: 0x24a50b84  addiu       $a1, $a1, 0xB84
    ctx->pc = 0x49cebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2948));
    // 0x49cec0: 0x8482011a  lh          $v0, 0x11A($a0)
    ctx->pc = 0x49cec0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x49cec4: 0x2484011c  addiu       $a0, $a0, 0x11C
    ctx->pc = 0x49cec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 284));
    // 0x49cec8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49cec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49cecc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x49ceccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x49ced0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49ced0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49ced4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49ced4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49ced8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x49ced8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x49cedc: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x49cedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x49cee0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49cee4: 0x84880000  lh          $t0, 0x0($a0)
    ctx->pc = 0x49cee4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49cee8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49cee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49ceec: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x49ceecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x49cef0: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x49cef0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x49cef4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x49cef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x49cef8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x49cef8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x49cefc: 0x84880000  lh          $t0, 0x0($a0)
    ctx->pc = 0x49cefcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49cf00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49cf00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49cf04: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x49cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x49cf08: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x49cf08u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49cf0c: 0x81272b2  j           func_49CAC8
    ctx->pc = 0x49CF0Cu;
    ctx->pc = 0x49CF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49CF0Cu;
    // 0x49cf10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49CAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49CAC8u, 0x49CF0Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x49CF14u;
    // 0x49cf14: 0x0  nop
    ctx->pc = 0x49cf14u;
    // NOP
    ctx->pc = 0x49cf18u;
}
