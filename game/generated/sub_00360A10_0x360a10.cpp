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

// Function: sub_00360A10
// Address: 0x360a10 - 0x360a60
void sub_00360A10_0x360a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360A10_0x360a10");
#endif

    ctx->pc = 0x360a10u;

    // 0x360a10: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x360a10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x360a14: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x360a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x360a18: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x360a18u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x360a1c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x360A1Cu;
    {
        const bool branch_taken_0x360a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x360a1c) {
            ctx->pc = 0x360A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x360A1Cu;
            // 0x360a20: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x360A24u;
            goto label_360a24;
        }
    }
    ctx->pc = 0x360A24u;
label_360a24:
    // 0x360a24: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x360a24u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x360a28: 0x1810  mfhi        $v1
    ctx->pc = 0x360a28u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x360a2c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x360a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360a30: 0x2482ff02  addiu       $v0, $a0, -0xFE
    ctx->pc = 0x360a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967042));
    // 0x360a34: 0x28830080  slti        $v1, $a0, 0x80
    ctx->pc = 0x360a34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x360a38: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x360a38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x360a3c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x360A3Cu;
    {
        const bool branch_taken_0x360a3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x360A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360A3Cu;
        // 0x360a40: 0x2885ff81  slti        $a1, $a0, -0x7F (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967169) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x360a3c) {
            ctx->pc = 0x360A54u;
            goto label_360a54;
        }
    }
    ctx->pc = 0x360A44u;
    // 0x360a44: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x360A44u;
    {
        const bool branch_taken_0x360a44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x360a44) {
            ctx->pc = 0x360A58u;
            goto label_360a58;
        }
    }
    ctx->pc = 0x360A4Cu;
    // 0x360a4c: 0x248200fe  addiu       $v0, $a0, 0xFE
    ctx->pc = 0x360a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 254));
    // 0x360a50: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x360a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_360a54:
    // 0x360a54: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x360a54u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
label_360a58:
    // 0x360a58: 0x3e00008  jr          $ra
    ctx->pc = 0x360A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360A58u;
        // 0x360a5c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360A60u;
}
