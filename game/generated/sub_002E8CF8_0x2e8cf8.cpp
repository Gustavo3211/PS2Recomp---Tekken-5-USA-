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

// Function: sub_002E8CF8
// Address: 0x2e8cf8 - 0x2e8de0
void sub_002E8CF8_0x2e8cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8CF8_0x2e8cf8");
#endif

    switch (ctx->pc) {
        case 0x2e8d14u: goto label_2e8d14;
        case 0x2e8d2cu: goto label_2e8d2c;
        case 0x2e8d7cu: goto label_2e8d7c;
        case 0x2e8dc8u: goto label_2e8dc8;
        default: break;
    }

    ctx->pc = 0x2e8cf8u;

    // 0x2e8cf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e8cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e8cfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e8cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e8d00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e8d00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8d04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e8d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e8d08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e8d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e8d0c: 0xc0bbd40  jal         func_2EF500
    ctx->pc = 0x2E8D0Cu;
    SET_GPR_U32(ctx, 31, 0x2E8D14u);
    ctx->pc = 0x2E8D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8D0Cu;
    // 0x2e8d10: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF500u, 0x2E8D0Cu, 0x2E8D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8D14u;
label_2e8d14:
    // 0x2e8d14: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2e8d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2e8d18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e8d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8d1c: 0x2463fd60  addiu       $v1, $v1, -0x2A0
    ctx->pc = 0x2e8d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966624));
    // 0x2e8d20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e8d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8d24: 0xc0bbd88  jal         func_2EF620
    ctx->pc = 0x2E8D24u;
    SET_GPR_U32(ctx, 31, 0x2E8D2Cu);
    ctx->pc = 0x2E8D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8D24u;
    // 0x2e8d28: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF620u, 0x2E8D24u, 0x2E8D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8D2Cu;
label_2e8d2c:
    // 0x2e8d2c: 0x26260050  addiu       $a2, $s1, 0x50
    ctx->pc = 0x2e8d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x2e8d30: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2e8d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e8d34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8D34u;
    {
        const bool branch_taken_0x2e8d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D34u;
        // 0x2e8d38: 0x260800b8  addiu       $t0, $s0, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8d34) {
            ctx->pc = 0x2E8D50u;
            goto label_2e8d50;
        }
    }
    ctx->pc = 0x2E8D3Cu;
    // 0x2e8d3c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e8d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e8d40: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2e8d40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8d44: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2e8d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2e8d48: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E8D48u;
    {
        const bool branch_taken_0x2e8d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e8d48) {
            ctx->pc = 0x2E8D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8D48u;
            // 0x2e8d4c: 0xad070000  sw          $a3, 0x0($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8D60u;
            goto label_2e8d60;
        }
    }
    ctx->pc = 0x2E8D50u;
label_2e8d50:
    // 0x2e8d50: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2e8d50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x2e8d54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e8d54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8d58: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2e8d58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2e8d5c: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x2e8d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
label_2e8d60:
    // 0x2e8d60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e8d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8d64: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2e8d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e8d68: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x2e8d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2e8d6c: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x2e8d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2e8d70: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x2e8d70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2e8d74: 0xc0bbd8a  jal         func_2EF628
    ctx->pc = 0x2E8D74u;
    SET_GPR_U32(ctx, 31, 0x2E8D7Cu);
    ctx->pc = 0x2E8D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8D74u;
    // 0x2e8d78: 0xad020004  sw          $v0, 0x4($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF628u, 0x2E8D74u, 0x2E8D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8D7Cu;
label_2e8d7c:
    // 0x2e8d7c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e8d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e8d80: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2e8d80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x2e8d84: 0x24420640  addiu       $v0, $v0, 0x640
    ctx->pc = 0x2e8d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1600));
    // 0x2e8d88: 0x24a5f670  addiu       $a1, $a1, -0x990
    ctx->pc = 0x2e8d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964848));
    // 0x2e8d8c: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2e8d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2e8d90: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2e8d90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EF674u));
    // 0x2e8d94: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2e8d94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e8d98: 0xa2020140  sb          $v0, 0x140($s0)
    ctx->pc = 0x2e8d98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 320), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e8d9c: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2e8d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EF680u));
    // 0x2e8da0: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x2e8da0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e8da4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E8DA4u;
    {
        const bool branch_taken_0x2e8da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8DA4u;
        // 0x2e8da8: 0xa2040141  sb          $a0, 0x141($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 321), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8da4) {
            ctx->pc = 0x2E8DC8u;
            goto label_2e8dc8;
        }
    }
    ctx->pc = 0x2E8DACu;
    // 0x2e8dac: 0x0  nop
    ctx->pc = 0x2e8dacu;
    // NOP
    // 0x2e8db0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e8db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e8db4: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2e8db4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2e8db8: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2e8db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2e8dbc: 0x2484057c  addiu       $a0, $a0, 0x57C
    ctx->pc = 0x2e8dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1404));
    // 0x2e8dc0: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2E8DC0u;
    SET_GPR_U32(ctx, 31, 0x2E8DC8u);
    ctx->pc = 0x2E8DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8DC0u;
    // 0x2e8dc4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2E8DC0u, 0x2E8DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8DC8u;
label_2e8dc8:
    // 0x2e8dc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e8dc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8dcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e8dccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e8dd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e8dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8DD4u;
        // 0x2e8dd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8DDCu;
    // 0x2e8ddc: 0x0  nop
    ctx->pc = 0x2e8ddcu;
    // NOP
    ctx->pc = 0x2e8de0u;
}
