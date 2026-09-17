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

// Function: sub_004A8570
// Address: 0x4a8570 - 0x4a85c0
void sub_004A8570_0x4a8570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A8570_0x4a8570");
#endif

    ctx->pc = 0x4a8570u;

    // 0x4a8570: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4a8570u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4a8574: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x4a8574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x4a8578: 0x42443  sra         $a0, $a0, 17
    ctx->pc = 0x4a8578u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 17));
    // 0x4a857c: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x4a857cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x4a8580: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x4a8580u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4a8584: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x4a8584u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x4a8588: 0x24429080  addiu       $v0, $v0, -0x6F80
    ctx->pc = 0x4a8588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938752));
    // 0x4a858c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4a858cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4a8590: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4a8590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4a8594: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a8594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a8598: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x4a8598u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a859c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4a859cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4a85a0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4a85a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a85a4: 0x52823  negu        $a1, $a1
    ctx->pc = 0x4a85a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x4a85a8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a85a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a85ac: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4a85acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x4a85b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a85b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a85b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4A85B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A85B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A85B4u;
        // 0x4a85b8: 0xa21024  and         $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A85B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A85BCu;
    // 0x4a85bc: 0x0  nop
    ctx->pc = 0x4a85bcu;
    // NOP
    ctx->pc = 0x4a85c0u;
}
