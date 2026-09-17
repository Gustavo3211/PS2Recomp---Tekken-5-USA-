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

// Function: sub_00509D38
// Address: 0x509d38 - 0x509df0
void sub_00509D38_0x509d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00509D38_0x509d38");
#endif

    switch (ctx->pc) {
        case 0x509d5cu: goto label_509d5c;
        default: break;
    }

    ctx->pc = 0x509d38u;

    // 0x509d38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x509d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x509d3c: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x509d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x509d40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x509d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x509d44: 0x2450c5ec  addiu       $s0, $v0, -0x3A14
    ctx->pc = 0x509d44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952428));
    // 0x509d48: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x509d48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x509d4c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x509d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8EC5ECu));
    // 0x509d50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x509d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x509d54: 0xc14481c  jal         func_512070
    ctx->pc = 0x509D54u;
    SET_GPR_U32(ctx, 31, 0x509D5Cu);
    ctx->pc = 0x509D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x509D54u;
    // 0x509d58: 0x2484c5e8  addiu       $a0, $a0, -0x3A18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512070u, 0x509D54u, 0x509D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x509D5Cu;
label_509d5c:
    // 0x509d5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x509d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x509d60: 0x54430020  bnel        $v0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x509D60u;
    {
        const bool branch_taken_0x509d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x509d60) {
            ctx->pc = 0x509D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x509D60u;
            // 0x509d64: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x509DE4u;
            goto label_509de4;
        }
    }
    ctx->pc = 0x509D68u;
    // 0x509d68: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x509d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x509d6c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x509d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x509d70: 0x9444c5f0  lhu         $a0, -0x3A10($v0)
    ctx->pc = 0x509d70u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x8EC5F0u));
    // 0x509d74: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x509d74u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x509d78: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x509d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x509d7c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x509d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x509d80: 0xa4400002  sh          $zero, 0x2($v0)
    ctx->pc = 0x509d80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x509d84: 0x9464c5f4  lhu         $a0, -0x3A0C($v1)
    ctx->pc = 0x509d84u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x8EC5F4u));
    // 0x509d88: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x509d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x509d8c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x509d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x509d90: 0xa4440004  sh          $a0, 0x4($v0)
    ctx->pc = 0x509d90u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x509d94: 0x9464c5f6  lhu         $a0, -0x3A0A($v1)
    ctx->pc = 0x509d94u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x8EC5F6u));
    // 0x509d98: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x509d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x509d9c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x509d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x509da0: 0xa4440006  sh          $a0, 0x6($v0)
    ctx->pc = 0x509da0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x509da4: 0x9464c5f8  lhu         $a0, -0x3A08($v1)
    ctx->pc = 0x509da4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x8EC5F8u));
    // 0x509da8: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x509da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x509dac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x509dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x509db0: 0xa4440008  sh          $a0, 0x8($v0)
    ctx->pc = 0x509db0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x509db4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x509db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x509db8: 0x9464c5fa  lhu         $a0, -0x3A06($v1)
    ctx->pc = 0x509db8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x8EC5FAu));
    // 0x509dbc: 0xa444000a  sh          $a0, 0xA($v0)
    ctx->pc = 0x509dbcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x509dc0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x509dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x509dc4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x509dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x509dc8: 0xa4a2000c  sh          $v0, 0xC($a1)
    ctx->pc = 0x509dc8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x509dcc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x509dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x509dd0: 0xa460000e  sh          $zero, 0xE($v1)
    ctx->pc = 0x509dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x509dd4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x509dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x509dd8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x509dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x509ddc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x509ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x509de0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x509de0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_509de4:
    // 0x509de4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x509de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x509de8: 0x3e00008  jr          $ra
    ctx->pc = 0x509DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x509DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x509DE8u;
        // 0x509dec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x509DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x509DF0u;
}
