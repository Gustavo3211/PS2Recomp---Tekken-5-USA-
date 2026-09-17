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

// Function: entry_514c08
// Address: 0x514c08 - 0x514d08
void entry_514c08_0x514d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_514c08_0x514d08");
#endif

    switch (ctx->pc) {
        case 0x514c7cu: goto label_514c7c;
        case 0x514cc0u: goto label_514cc0;
        case 0x514cd8u: goto label_514cd8;
        case 0x514cecu: goto label_514cec;
        default: break;
    }

    ctx->pc = 0x514c08u;

    // 0x514c08: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x514c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x514c0c: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x514c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x514c10: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x514c10u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
    // 0x514c14: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x514c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x514c18: 0x8e229b3c  lw          $v0, -0x64C4($s1)
    ctx->pc = 0x514c18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x729B3Cu));
    // 0x514c1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x514c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x514c20: 0x4410032  bgez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x514C20u;
    {
        const bool branch_taken_0x514c20 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x514C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514C20u;
        // 0x514c24: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514c20) {
            ctx->pc = 0x514CECu;
            goto label_514cec;
        }
    }
    ctx->pc = 0x514C28u;
    // 0x514c28: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x514c28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x514c2c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x514c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x514c30: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x514c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x514c34: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x514c34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x514c38: 0x3c070073  lui         $a3, 0x73
    ctx->pc = 0x514c38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)115 << 16));
    // 0x514c3c: 0x3c080073  lui         $t0, 0x73
    ctx->pc = 0x514c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)115 << 16));
    // 0x514c40: 0x3c090073  lui         $t1, 0x73
    ctx->pc = 0x514c40u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)115 << 16));
    // 0x514c44: 0x3c0a0073  lui         $t2, 0x73
    ctx->pc = 0x514c44u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)115 << 16));
    // 0x514c48: 0x3c0b0073  lui         $t3, 0x73
    ctx->pc = 0x514c48u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)115 << 16));
    // 0x514c4c: 0xaca09b20  sw          $zero, -0x64E0($a1)
    ctx->pc = 0x514c4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x729B20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x729B20u, _value); } while (0);
    // 0x514c50: 0xac409b18  sw          $zero, -0x64E8($v0)
    ctx->pc = 0x514c50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x729B18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x729B18u, _value); } while (0);
    // 0x514c54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x514c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x514c58: 0xac609b1c  sw          $zero, -0x64E4($v1)
    ctx->pc = 0x514c58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x729B1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x729B1Cu, _value); } while (0);
    // 0x514c5c: 0x3405e620  ori         $a1, $zero, 0xE620
    ctx->pc = 0x514c5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58912);
    // 0x514c60: 0xacc09b24  sw          $zero, -0x64DC($a2)
    ctx->pc = 0x514c60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x729B24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x729B24u, _value); } while (0);
    // 0x514c64: 0xace09b28  sw          $zero, -0x64D8($a3)
    ctx->pc = 0x514c64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x729B28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x729B28u, _value); } while (0);
    // 0x514c68: 0xad009b2c  sw          $zero, -0x64D4($t0)
    ctx->pc = 0x514c68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x729B2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x729B2Cu, _value); } while (0);
    // 0x514c6c: 0xad209b30  sw          $zero, -0x64D0($t1)
    ctx->pc = 0x514c6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x729B30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x729B30u, _value); } while (0);
    // 0x514c70: 0xad409b34  sw          $zero, -0x64CC($t2)
    ctx->pc = 0x514c70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x729B34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x729B34u, _value); } while (0);
    // 0x514c74: 0xc145220  jal         func_514880
    ctx->pc = 0x514C74u;
    SET_GPR_U32(ctx, 31, 0x514C7Cu);
    ctx->pc = 0x514C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x514C74u;
    // 0x514c78: 0xad609b38  sw          $zero, -0x64C8($t3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 11), 4294941496), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x514880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x514880u, 0x514C74u, 0x514C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x514C7Cu;
label_514c7c:
    // 0x514c7c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x514c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x514c80: 0x3c0200d0  lui         $v0, 0xD0
    ctx->pc = 0x514c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)208 << 16));
    // 0x514c84: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x514c84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x514c88: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x514c88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x514c8c: 0x24634e40  addiu       $v1, $v1, 0x4E40
    ctx->pc = 0x514c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20032));
    // 0x514c90: 0x244245c0  addiu       $v0, $v0, 0x45C0
    ctx->pc = 0x514c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17856));
    // 0x514c94: 0x24a5d5b8  addiu       $a1, $a1, -0x2A48
    ctx->pc = 0x514c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956472));
    // 0x514c98: 0x24c68870  addiu       $a2, $a2, -0x7790
    ctx->pc = 0x514c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936688));
    // 0x514c9c: 0x24071000  addiu       $a3, $zero, 0x1000
    ctx->pc = 0x514c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x514ca0: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x514ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x514ca4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x514ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x514ca8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x514ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x514cac: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x514cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x514cb0: 0xafb00014  sw          $s0, 0x14($sp)
    ctx->pc = 0x514cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
    // 0x514cb4: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x514cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x514cb8: 0xc043c68  jal         func_10F1A0
    ctx->pc = 0x514CB8u;
    SET_GPR_U32(ctx, 31, 0x514CC0u);
    ctx->pc = 0x514CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x514CB8u;
    // 0x514cbc: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F1A0u, 0x514CB8u, 0x514CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x514CC0u;
label_514cc0:
    // 0x514cc0: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x514CC0u;
    {
        const bool branch_taken_0x514cc0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x514CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514CC0u;
        // 0x514cc4: 0xae229b3c  sw          $v0, -0x64C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294941500), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514cc0) {
            ctx->pc = 0x514CECu;
            goto label_514cec;
        }
    }
    ctx->pc = 0x514CC8u;
    // 0x514cc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x514cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x514ccc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x514cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x514cd0: 0xc044138  jal         func_1104E0
    ctx->pc = 0x514CD0u;
    SET_GPR_U32(ctx, 31, 0x514CD8u);
    ctx->pc = 0x514CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x514CD0u;
    // 0x514cd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1104E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1104E0u, 0x514CD0u, 0x514CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x514CD8u;
label_514cd8:
    // 0x514cd8: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x514CD8u;
    {
        const bool branch_taken_0x514cd8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x514CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514CD8u;
        // 0x514cdc: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514cd8) {
            ctx->pc = 0x514CF0u;
            goto label_514cf0;
        }
    }
    ctx->pc = 0x514CE0u;
    // 0x514ce0: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x514ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x514ce4: 0xc044794  jal         func_111E50
    ctx->pc = 0x514CE4u;
    SET_GPR_U32(ctx, 31, 0x514CECu);
    ctx->pc = 0x514CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x514CE4u;
    // 0x514ce8: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111E50u, 0x514CE4u, 0x514CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x514CECu;
label_514cec:
    // 0x514cec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x514cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_514cf0:
    // 0x514cf0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x514cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x514cf4: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x514cf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x514cf8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x514cf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x514cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x514CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x514D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514CFCu;
        // 0x514d00: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x514CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x514D04u;
    // 0x514d04: 0x0  nop
    ctx->pc = 0x514d04u;
    // NOP
    ctx->pc = 0x514d08u;
}
