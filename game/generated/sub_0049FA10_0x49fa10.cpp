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

// Function: sub_0049FA10
// Address: 0x49fa10 - 0x49fa98
void sub_0049FA10_0x49fa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049FA10_0x49fa10");
#endif

    switch (ctx->pc) {
        case 0x49fa34u: goto label_49fa34;
        case 0x49fa50u: goto label_49fa50;
        case 0x49fa6cu: goto label_49fa6c;
        default: break;
    }

    ctx->pc = 0x49fa10u;

    // 0x49fa10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49fa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x49fa14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49fa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49fa18: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x49fa18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x49fa1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x49fa1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x49fa20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x49fa20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fa24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49fa24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x49fa28: 0x26100bb4  addiu       $s0, $s0, 0xBB4
    ctx->pc = 0x49fa28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2996));
    // 0x49fa2c: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x49FA2Cu;
    SET_GPR_U32(ctx, 31, 0x49FA34u);
    ctx->pc = 0x49FA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FA2Cu;
    // 0x49fa30: 0x86240118  lh          $a0, 0x118($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x49FA2Cu, 0x49FA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FA34u;
label_49fa34:
    // 0x49fa34: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x49fa34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x49fa38: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x49fa38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x49fa3c: 0xa6230022  sh          $v1, 0x22($s1)
    ctx->pc = 0x49fa3cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x49fa40: 0x8624011c  lh          $a0, 0x11C($s1)
    ctx->pc = 0x49fa40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x49fa44: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x49fa44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49fa48: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x49FA48u;
    SET_GPR_U32(ctx, 31, 0x49FA50u);
    ctx->pc = 0x49FA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FA48u;
    // 0x49fa4c: 0xa6220024  sh          $v0, 0x24($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x49FA48u, 0x49FA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FA50u;
label_49fa50:
    // 0x49fa50: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x49fa50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x49fa54: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x49fa54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x49fa58: 0xa6230026  sh          $v1, 0x26($s1)
    ctx->pc = 0x49fa58u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x49fa5c: 0x86240120  lh          $a0, 0x120($s1)
    ctx->pc = 0x49fa5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x49fa60: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x49fa60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49fa64: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x49FA64u;
    SET_GPR_U32(ctx, 31, 0x49FA6Cu);
    ctx->pc = 0x49FA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FA64u;
    // 0x49fa68: 0xa6220028  sh          $v0, 0x28($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x49FA64u, 0x49FA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FA6Cu;
label_49fa6c:
    // 0x49fa6c: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x49fa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x49fa70: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x49fa70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x49fa74: 0xa623002a  sh          $v1, 0x2A($s1)
    ctx->pc = 0x49fa74u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x49fa78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49fa78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49fa7c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x49fa7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49fa80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49fa80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49fa84: 0xa622002c  sh          $v0, 0x2C($s1)
    ctx->pc = 0x49fa84u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x49fa88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x49fa88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49fa8c: 0x3e00008  jr          $ra
    ctx->pc = 0x49FA8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49FA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FA8Cu;
        // 0x49fa90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49FA8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49FA94u;
    // 0x49fa94: 0x0  nop
    ctx->pc = 0x49fa94u;
    // NOP
    ctx->pc = 0x49fa98u;
}
