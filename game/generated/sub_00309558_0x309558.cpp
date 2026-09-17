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

// Function: sub_00309558
// Address: 0x309558 - 0x309588
void sub_00309558_0x309558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309558_0x309558");
#endif

    ctx->pc = 0x309558u;

    // 0x309558: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x309558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30955c: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x30955cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x309560: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x309560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x309564: 0x2442ed40  addiu       $v0, $v0, -0x12C0
    ctx->pc = 0x309564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962496));
    // 0x309568: 0x52823  negu        $a1, $a1
    ctx->pc = 0x309568u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x30956c: 0xac440380  sw          $a0, 0x380($v0)
    ctx->pc = 0x30956cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 4));
    // 0x309570: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x309570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309574: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x309574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x309578: 0xac450384  sw          $a1, 0x384($v0)
    ctx->pc = 0x309578u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 900), GPR_U32(ctx, 5));
    // 0x30957c: 0x80c26ac  j           func_309AB0
    ctx->pc = 0x30957Cu;
    ctx->pc = 0x309580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30957Cu;
    // 0x309580: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309AB0u;
    sub_00309AB0_0x309ab0(rdram, ctx, runtime); return;
    ctx->pc = 0x309584u;
    // 0x309584: 0x0  nop
    ctx->pc = 0x309584u;
    // NOP
    ctx->pc = 0x309588u;
}
