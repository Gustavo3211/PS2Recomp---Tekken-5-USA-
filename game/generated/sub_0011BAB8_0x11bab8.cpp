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

// Function: sub_0011BAB8
// Address: 0x11bab8 - 0x11bbd8
void sub_0011BAB8_0x11bab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BAB8_0x11bab8");
#endif

    switch (ctx->pc) {
        case 0x11bae8u: goto label_11bae8;
        case 0x11bb00u: goto label_11bb00;
        case 0x11bb0cu: goto label_11bb0c;
        case 0x11bb18u: goto label_11bb18;
        case 0x11bb20u: goto label_11bb20;
        case 0x11bb28u: goto label_11bb28;
        case 0x11bb38u: goto label_11bb38;
        case 0x11bb58u: goto label_11bb58;
        case 0x11bb88u: goto label_11bb88;
        case 0x11bb90u: goto label_11bb90;
        case 0x11bbbcu: goto label_11bbbc;
        default: break;
    }

    ctx->pc = 0x11bab8u;

    // 0x11bab8: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x11bab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x11babc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11babcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11bac0: 0x8c4327d4  lw          $v1, 0x27D4($v0)
    ctx->pc = 0x11bac0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1327D4u));
    // 0x11bac4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11bac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11bac8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11BAC8u;
    {
        const bool branch_taken_0x11bac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BAC8u;
        // 0x11bacc: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bac8) {
            ctx->pc = 0x11BAF0u;
            goto label_11baf0;
        }
    }
    ctx->pc = 0x11BAD0u;
    // 0x11bad0: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x11bad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x11bad4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11bad8: 0xac622820  sw          $v0, 0x2820($v1)
    ctx->pc = 0x11bad8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x132820u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x132820u, _value); } while (0);
    // 0x11badc: 0x3c100013  lui         $s0, 0x13
    ctx->pc = 0x11badcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)19 << 16));
    // 0x11bae0: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x11BAE0u;
    SET_GPR_U32(ctx, 31, 0x11BAE8u);
    ctx->pc = 0x11BAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BAE0u;
    // 0x11bae4: 0x8e0427e0  lw          $a0, 0x27E0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x11BAE0u, 0x11BAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BAE8u;
label_11bae8:
    // 0x11bae8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11BAE8u;
    {
        const bool branch_taken_0x11bae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BAE8u;
        // 0x11baec: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bae8) {
            ctx->pc = 0x11BAF8u;
            goto label_11baf8;
        }
    }
    ctx->pc = 0x11BAF0u;
label_11baf0:
    // 0x11baf0: 0x3c100013  lui         $s0, 0x13
    ctx->pc = 0x11baf0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)19 << 16));
    // 0x11baf4: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x11baf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
label_11baf8:
    // 0x11baf8: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x11BAF8u;
    SET_GPR_U32(ctx, 31, 0x11BB00u);
    ctx->pc = 0x11BAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BAF8u;
    // 0x11bafc: 0x8c4427e8  lw          $a0, 0x27E8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x11BAF8u, 0x11BB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BB00u;
label_11bb00:
    // 0x11bb00: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x11bb00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x11bb04: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x11BB04u;
    SET_GPR_U32(ctx, 31, 0x11BB0Cu);
    ctx->pc = 0x11BB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BB04u;
    // 0x11bb08: 0x8c6427ec  lw          $a0, 0x27EC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x11BB04u, 0x11BB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BB0Cu;
label_11bb0c:
    // 0x11bb0c: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x11bb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x11bb10: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x11BB10u;
    SET_GPR_U32(ctx, 31, 0x11BB18u);
    ctx->pc = 0x11BB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BB10u;
    // 0x11bb14: 0x8c6427f0  lw          $a0, 0x27F0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x11BB10u, 0x11BB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BB18u;
label_11bb18:
    // 0x11bb18: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x11BB18u;
    SET_GPR_U32(ctx, 31, 0x11BB20u);
    ctx->pc = 0x11BB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BB18u;
    // 0x11bb1c: 0x8e0427e0  lw          $a0, 0x27E0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x11BB18u, 0x11BB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BB20u;
label_11bb20:
    // 0x11bb20: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x11BB20u;
    SET_GPR_U32(ctx, 31, 0x11BB28u);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x11BB20u, 0x11BB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BB28u;
label_11bb28:
    // 0x11bb28: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x11bb28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x11bb2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11bb2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb30: 0xc0448ca  jal         func_112328
    ctx->pc = 0x11BB30u;
    SET_GPR_U32(ctx, 31, 0x11BB38u);
    ctx->pc = 0x11BB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BB30u;
    // 0x11bb34: 0x34840012  ori         $a0, $a0, 0x12 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18);
    ctx->in_delay_slot = false;
    ctx->pc = 0x112328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112328u, 0x11BB30u, 0x11BB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BB38u;
label_11bb38:
    // 0x11bb38: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11BB38u;
    {
        const bool branch_taken_0x11bb38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB38u;
        // 0x11bb3c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb38) {
            ctx->pc = 0x11BB4Cu;
            goto label_11bb4c;
        }
    }
    ctx->pc = 0x11BB40u;
    // 0x11bb40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11bb40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bb44: 0x804627e  j           func_1189F8
    ctx->pc = 0x11BB44u;
    ctx->pc = 0x11BB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BB44u;
    // 0x11bb48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189F8u;
    sub_001189F8_0x1189f8(rdram, ctx, runtime); return;
    ctx->pc = 0x11BB4Cu;
label_11bb4c:
    // 0x11bb4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11bb4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bb50: 0x3e00008  jr          $ra
    ctx->pc = 0x11BB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB50u;
        // 0x11bb54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BB50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BB58u;
label_11bb58:
    // 0x11bb58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11bb58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11bb5c: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x11bb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x11bb60: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11bb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11bb64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11bb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11bb68: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11bb68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb6c: 0x8c432808  lw          $v1, 0x2808($v0)
    ctx->pc = 0x11bb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x132808u));
    // 0x11bb70: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11bb70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11bb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11bb78: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BB78u;
    {
        const bool branch_taken_0x11bb78 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x11BB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB78u;
        // 0x11bb7c: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb78) {
            ctx->pc = 0x11BB88u;
            goto label_11bb88;
        }
    }
    ctx->pc = 0x11BB80u;
    // 0x11bb80: 0xc046f0c  jal         func_11BC30
    ctx->pc = 0x11BB80u;
    SET_GPR_U32(ctx, 31, 0x11BB88u);
    ctx->pc = 0x11BC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BC30u, 0x11BB80u, 0x11BB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BB88u;
label_11bb88:
    // 0x11bb88: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x11BB88u;
    SET_GPR_U32(ctx, 31, 0x11BB90u);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x11BB88u, 0x11BB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BB90u;
label_11bb90:
    // 0x11bb90: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x11bb90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x11bb94: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x11bb94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x11bb98: 0x8cb1f848  lw          $s1, -0x7B8($a1)
    ctx->pc = 0x11bb98u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x1EF848u));
    // 0x11bb9c: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x11bb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x11bba0: 0xac90f850  sw          $s0, -0x7B0($a0)
    ctx->pc = 0x11bba0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x1EF850u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1EF850u, _value); } while (0);
    // 0x11bba4: 0xacb2f848  sw          $s2, -0x7B8($a1)
    ctx->pc = 0x11bba4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1EF848u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1EF848u, _value); } while (0);
    // 0x11bba8: 0xac7cf84c  sw          $gp, -0x7B4($v1)
    ctx->pc = 0x11bba8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 28)); ps2TraceGuestWrite(rdram, 0x1EF84Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1EF84Cu, _value); } while (0);
    // 0x11bbac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11BBACu;
    {
        const bool branch_taken_0x11bbac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BBACu;
        // 0x11bbb0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bbac) {
            ctx->pc = 0x11BBC0u;
            goto label_11bbc0;
        }
    }
    ctx->pc = 0x11BBB4u;
    // 0x11bbb4: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x11BBB4u;
    SET_GPR_U32(ctx, 31, 0x11BBBCu);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x11BBB4u, 0x11BBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BBBCu;
label_11bbbc:
    // 0x11bbbc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x11bbbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11bbc0:
    // 0x11bbc0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11bbc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11bbc4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11bbc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11bbc8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11bbc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11bbcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11bbccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bbd0: 0x3e00008  jr          $ra
    ctx->pc = 0x11BBD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BBD0u;
        // 0x11bbd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BBD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BBD8u;
}
