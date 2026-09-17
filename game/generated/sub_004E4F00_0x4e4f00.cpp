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

// Function: sub_004E4F00
// Address: 0x4e4f00 - 0x4e4f40
void sub_004E4F00_0x4e4f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4F00_0x4e4f00");
#endif

    ctx->pc = 0x4e4f00u;

    // 0x4e4f00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e4f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e4f04: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4e4f04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e4f08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e4f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e4f0c: 0x244601bc  addiu       $a2, $v0, 0x1BC
    ctx->pc = 0x4e4f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
    // 0x4e4f10: 0x2442014a  addiu       $v0, $v0, 0x14A
    ctx->pc = 0x4e4f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 330));
    // 0x4e4f14: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4e4f14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e4f18: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4e4f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4e4f1c: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4e4f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4e4f20: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E4F20u;
    {
        const bool branch_taken_0x4e4f20 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x4E4F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4F20u;
        // 0x4e4f24: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4f20) {
            ctx->pc = 0x4E4F34u;
            goto label_4e4f34;
        }
    }
    ctx->pc = 0x4E4F28u;
    // 0x4e4f28: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4e4f28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e4f2c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4e4f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4e4f30: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4e4f30u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_4e4f34:
    // 0x4e4f34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e4f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e4f38: 0x81393d0  j           func_4E4F40
    ctx->pc = 0x4E4F38u;
    ctx->pc = 0x4E4F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4F38u;
    // 0x4e4f3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4F40u;
    sub_004E4F40_0x4e4f40(rdram, ctx, runtime); return;
    ctx->pc = 0x4E4F40u;
}
