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

// Function: sub_0012DC20
// Address: 0x12dc20 - 0x12dd90
void sub_0012DC20_0x12dc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012DC20_0x12dc20");
#endif

    switch (ctx->pc) {
        case 0x12dc54u: goto label_12dc54;
        case 0x12dc7cu: goto label_12dc7c;
        case 0x12dc98u: goto label_12dc98;
        case 0x12dcc4u: goto label_12dcc4;
        case 0x12dcc8u: goto label_12dcc8;
        case 0x12dcd8u: goto label_12dcd8;
        case 0x12dd18u: goto label_12dd18;
        default: break;
    }

    ctx->pc = 0x12dc20u;

label_12dc20:
    // 0x12dc20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12dc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12dc24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12dc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12dc28: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12dc28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12dc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12dc30: 0x128040  sll         $s0, $s2, 1
    ctx->pc = 0x12dc30u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x12dc34: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x12dc34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x12dc38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12dc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12dc3c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x12dc3cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x12dc40: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12dc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12dc44: 0x2128023  subu        $s0, $s0, $s2
    ctx->pc = 0x12dc44u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x12dc48: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x12dc48u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x12dc4c: 0xc049f36  jal         func_127CD8
    ctx->pc = 0x12DC4Cu;
    SET_GPR_U32(ctx, 31, 0x12DC54u);
    ctx->pc = 0x12DC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DC4Cu;
    // 0x12dc50: 0x2605000c  addiu       $a1, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127CD8u, 0x12DC4Cu, 0x12DC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DC54u;
label_12dc54:
    // 0x12dc54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12dc54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12dc58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc5c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12dc5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc60: 0x2623000c  addiu       $v1, $s1, 0xC
    ctx->pc = 0x12dc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x12dc64: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x12DC64u;
    {
        const bool branch_taken_0x12dc64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC64u;
        // 0x12dc68: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dc64) {
            ctx->pc = 0x12DC80u;
            goto label_12dc80;
        }
    }
    ctx->pc = 0x12DC6Cu;
    // 0x12dc6c: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x12dc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x12dc70: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x12dc70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x12dc74: 0xc04a151  jal         func_128544
    ctx->pc = 0x12DC74u;
    SET_GPR_U32(ctx, 31, 0x12DC7Cu);
    ctx->pc = 0x12DC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DC74u;
    // 0x12dc78: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x12DC74u, 0x12DC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DC7Cu;
label_12dc7c:
    // 0x12dc7c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12dc7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12dc80:
    // 0x12dc80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12dc80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12dc84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12dc84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12dc88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12dc88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12dc8c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12dc8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12dc90: 0x3e00008  jr          $ra
    ctx->pc = 0x12DC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC90u;
        // 0x12dc94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DC90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12DC98u;
label_12dc98:
    // 0x12dc98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12dc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12dc9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12dc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12dca0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12dca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12dca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12dca8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12dca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12dcac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12dcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12dcb0: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x12dcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x12dcb4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12DCB4u;
    {
        const bool branch_taken_0x12dcb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCB4u;
        // 0x12dcb8: 0x263001d8  addiu       $s0, $s1, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dcb4) {
            ctx->pc = 0x12DCC4u;
            goto label_12dcc4;
        }
    }
    ctx->pc = 0x12DCBCu;
    // 0x12dcbc: 0xc04b774  jal         func_12DDD0
    ctx->pc = 0x12DCBCu;
    SET_GPR_U32(ctx, 31, 0x12DCC4u);
    ctx->pc = 0x12DDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DDD0u, 0x12DCBCu, 0x12DCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DCC4u;
label_12dcc4:
    // 0x12dcc4: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x12dcc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_12dcc8:
    // 0x12dcc8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x12dcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12dccc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12dcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12dcd0: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x12DCD0u;
    {
        const bool branch_taken_0x12dcd0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x12DCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCD0u;
        // 0x12dcd4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dcd0) {
            ctx->pc = 0x12DCFCu;
            goto label_12dcfc;
        }
    }
    ctx->pc = 0x12DCD8u;
label_12dcd8:
    // 0x12dcd8: 0x8482000c  lh          $v0, 0xC($a0)
    ctx->pc = 0x12dcd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12dcdc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x12DCDCu;
    {
        const bool branch_taken_0x12dcdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCDCu;
        // 0x12dce0: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dcdc) {
            ctx->pc = 0x12DD38u;
            goto label_12dd38;
        }
    }
    ctx->pc = 0x12DCE4u;
    // 0x12dce4: 0x0  nop
    ctx->pc = 0x12dce4u;
    // NOP
    // 0x12dce8: 0x0  nop
    ctx->pc = 0x12dce8u;
    // NOP
    // 0x12dcec: 0x0  nop
    ctx->pc = 0x12dcecu;
    // NOP
    // 0x12dcf0: 0x0  nop
    ctx->pc = 0x12dcf0u;
    // NOP
    // 0x12dcf4: 0x461fff8  bgez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x12DCF4u;
    {
        const bool branch_taken_0x12dcf4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x12DCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCF4u;
        // 0x12dcf8: 0x24840058  addiu       $a0, $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dcf4) {
            ctx->pc = 0x12DCD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12dcd8;
        }
    }
    ctx->pc = 0x12DCFCu;
label_12dcfc:
    // 0x12dcfc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x12dcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12dd00: 0x0  nop
    ctx->pc = 0x12dd00u;
    // NOP
    // 0x12dd04: 0x5480fff0  bnel        $a0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x12DD04u;
    {
        const bool branch_taken_0x12dd04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x12dd04) {
            ctx->pc = 0x12DD08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DD04u;
            // 0x12dd08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DCC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12dcc8;
        }
    }
    ctx->pc = 0x12DD0Cu;
    // 0x12dd0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12dd0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd10: 0xc04b708  jal         func_12DC20
    ctx->pc = 0x12DD10u;
    SET_GPR_U32(ctx, 31, 0x12DD18u);
    ctx->pc = 0x12DD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DD10u;
    // 0x12dd14: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DC20u;
    goto label_12dc20;
    ctx->pc = 0x12DD18u;
label_12dd18:
    // 0x12dd18: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12dd18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd1c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x12dd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x12dd20: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12DD20u;
    {
        const bool branch_taken_0x12dd20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD20u;
        // 0x12dd24: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dd20) {
            ctx->pc = 0x12DD30u;
            goto label_12dd30;
        }
    }
    ctx->pc = 0x12DD28u;
    // 0x12dd28: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x12DD28u;
    {
        const bool branch_taken_0x12dd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD28u;
        // 0x12dd2c: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dd28) {
            ctx->pc = 0x12DD78u;
            goto label_12dd78;
        }
    }
    ctx->pc = 0x12DD30u;
label_12dd30:
    // 0x12dd30: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x12DD30u;
    {
        const bool branch_taken_0x12dd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD30u;
        // 0x12dd34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dd30) {
            ctx->pc = 0x12DCC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12dcc8;
        }
    }
    ctx->pc = 0x12DD38u;
label_12dd38:
    // 0x12dd38: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x12dd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12dd3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12dd40: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x12dd40u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x12dd44: 0xac910054  sw          $s1, 0x54($a0)
    ctx->pc = 0x12dd44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 17));
    // 0x12dd48: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x12dd48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x12dd4c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x12dd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x12dd50: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x12dd50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x12dd54: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x12dd54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x12dd58: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x12dd58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x12dd5c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x12dd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x12dd60: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x12dd60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x12dd64: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x12dd64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x12dd68: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x12dd68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x12dd6c: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x12dd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x12dd70: 0xa482000c  sh          $v0, 0xC($a0)
    ctx->pc = 0x12dd70u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x12dd74: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x12dd74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12dd78:
    // 0x12dd78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12dd78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12dd7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12dd7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12dd80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12dd80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12dd84: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12dd84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12dd88: 0x3e00008  jr          $ra
    ctx->pc = 0x12DD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD88u;
        // 0x12dd8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12DD90u;
}
