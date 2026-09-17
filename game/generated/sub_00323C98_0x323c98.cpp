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

// Function: sub_00323C98
// Address: 0x323c98 - 0x323de0
void sub_00323C98_0x323c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323C98_0x323c98");
#endif

    switch (ctx->pc) {
        case 0x323cd4u: goto label_323cd4;
        case 0x323ce4u: goto label_323ce4;
        case 0x323cf0u: goto label_323cf0;
        case 0x323d00u: goto label_323d00;
        case 0x323d14u: goto label_323d14;
        case 0x323d30u: goto label_323d30;
        case 0x323da0u: goto label_323da0;
        case 0x323dacu: goto label_323dac;
        case 0x323dbcu: goto label_323dbc;
        default: break;
    }

    ctx->pc = 0x323c98u;

    // 0x323c98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x323c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x323c9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x323c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x323ca0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x323ca0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323ca4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x323ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x323ca8: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x323ca8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x323cac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x323cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x323cb0: 0x26900390  addiu       $s0, $s4, 0x390
    ctx->pc = 0x323cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 912));
    // 0x323cb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x323cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x323cb8: 0x128900  sll         $s1, $s2, 4
    ctx->pc = 0x323cb8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x323cbc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x323cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x323cc0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x323cc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323cc4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x323cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323cc8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x323cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x323ccc: 0xc0cbf6e  jal         func_32FDB8
    ctx->pc = 0x323CCCu;
    SET_GPR_U32(ctx, 31, 0x323CD4u);
    ctx->pc = 0x323CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323CCCu;
    // 0x323cd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FDB8u, 0x323CCCu, 0x323CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323CD4u;
label_323cd4:
    // 0x323cd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x323cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323cd8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x323cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323cdc: 0xc0cb17c  jal         func_32C5F0
    ctx->pc = 0x323CDCu;
    SET_GPR_U32(ctx, 31, 0x323CE4u);
    ctx->pc = 0x323CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323CDCu;
    // 0x323ce0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C5F0u, 0x323CDCu, 0x323CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323CE4u;
label_323ce4:
    // 0x323ce4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323ce8: 0xc0cbf6e  jal         func_32FDB8
    ctx->pc = 0x323CE8u;
    SET_GPR_U32(ctx, 31, 0x323CF0u);
    ctx->pc = 0x323CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323CE8u;
    // 0x323cec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FDB8u, 0x323CE8u, 0x323CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323CF0u;
label_323cf0:
    // 0x323cf0: 0x26640200  addiu       $a0, $s3, 0x200
    ctx->pc = 0x323cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
    // 0x323cf4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x323cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323cf8: 0xc0cb17c  jal         func_32C5F0
    ctx->pc = 0x323CF8u;
    SET_GPR_U32(ctx, 31, 0x323D00u);
    ctx->pc = 0x323CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323CF8u;
    // 0x323cfc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C5F0u, 0x323CF8u, 0x323D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323D00u;
label_323d00:
    // 0x323d00: 0x122840  sll         $a1, $s2, 1
    ctx->pc = 0x323d00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x323d04: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x323d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x323d08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323d0c: 0xc0cbf6e  jal         func_32FDB8
    ctx->pc = 0x323D0Cu;
    SET_GPR_U32(ctx, 31, 0x323D14u);
    ctx->pc = 0x323D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323D0Cu;
    // 0x323d10: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FDB8u, 0x323D0Cu, 0x323D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323D14u;
label_323d14:
    // 0x323d14: 0x26660400  addiu       $a2, $s3, 0x400
    ctx->pc = 0x323d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1024));
    // 0x323d18: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x323d18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323d1c: 0xacd20020  sw          $s2, 0x20($a2)
    ctx->pc = 0x323d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 18));
    // 0x323d20: 0x1a40000c  blez        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x323D20u;
    {
        const bool branch_taken_0x323d20 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x323D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D20u;
        // 0x323d24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323d20) {
            ctx->pc = 0x323D54u;
            goto label_323d54;
        }
    }
    ctx->pc = 0x323D28u;
    // 0x323d28: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x323d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323d2c: 0x0  nop
    ctx->pc = 0x323d2cu;
    // NOP
label_323d30:
    // 0x323d30: 0x2482fff4  addiu       $v0, $a0, -0xC
    ctx->pc = 0x323d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
    // 0x323d34: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x323d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x323d38: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x323d38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x323d3c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x323d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x323d40: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x323d40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x323d44: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x323d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x323d48: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x323d48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x323d4c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x323D4Cu;
    {
        const bool branch_taken_0x323d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x323D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D4Cu;
        // 0x323d50: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323d4c) {
            ctx->pc = 0x323D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_323d30;
        }
    }
    ctx->pc = 0x323D54u;
label_323d54:
    // 0x323d54: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x323d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x323d58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x323d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323d5c: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x323d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x323d60: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x323d60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x323d64: 0xac420000  sw          $v0, 0x0($v0)
    ctx->pc = 0x323d64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 2));
    // 0x323d68: 0xacc70004  sw          $a3, 0x4($a2)
    ctx->pc = 0x323d68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
    // 0x323d6c: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x323d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x323d70: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x323d70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x323d74: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x323d74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x323d78: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x323d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x323d7c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x323d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x323d80: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x323d80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x323d84: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x323d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x323d88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x323d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x323d8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x323d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x323d90: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x323d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
    // 0x323d94: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x323d94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x323d98: 0xc0d01ce  jal         func_340738
    ctx->pc = 0x323D98u;
    SET_GPR_U32(ctx, 31, 0x323DA0u);
    ctx->pc = 0x323D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323D98u;
    // 0x323d9c: 0xac660004  sw          $a2, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340738u, 0x323D98u, 0x323DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323DA0u;
label_323da0:
    // 0x323da0: 0x26840390  addiu       $a0, $s4, 0x390
    ctx->pc = 0x323da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 912));
    // 0x323da4: 0xc0cbf6e  jal         func_32FDB8
    ctx->pc = 0x323DA4u;
    SET_GPR_U32(ctx, 31, 0x323DACu);
    ctx->pc = 0x323DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323DA4u;
    // 0x323da8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FDB8u, 0x323DA4u, 0x323DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323DACu;
label_323dac:
    // 0x323dac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x323dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323db0: 0xae620424  sw          $v0, 0x424($s3)
    ctx->pc = 0x323db0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1060), GPR_U32(ctx, 2));
    // 0x323db4: 0xc0d01d6  jal         func_340758
    ctx->pc = 0x323DB4u;
    SET_GPR_U32(ctx, 31, 0x323DBCu);
    ctx->pc = 0x323DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323DB4u;
    // 0x323db8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340758u, 0x323DB4u, 0x323DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323DBCu;
label_323dbc:
    // 0x323dbc: 0xae720428  sw          $s2, 0x428($s3)
    ctx->pc = 0x323dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1064), GPR_U32(ctx, 18));
    // 0x323dc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x323dc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323dc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x323dc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x323dc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x323dc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323dcc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x323dccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x323dd0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x323dd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x323dd4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x323dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x323dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x323DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323DD8u;
        // 0x323ddc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323DE0u;
}
