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

// Function: sub_0021DB80
// Address: 0x21db80 - 0x21df58
void sub_0021DB80_0x21db80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021DB80_0x21db80");
#endif

    switch (ctx->pc) {
        case 0x21dbd4u: goto label_21dbd4;
        case 0x21dc54u: goto label_21dc54;
        case 0x21dc7cu: goto label_21dc7c;
        case 0x21dc98u: goto label_21dc98;
        case 0x21dcccu: goto label_21dccc;
        case 0x21dce0u: goto label_21dce0;
        case 0x21dcecu: goto label_21dcec;
        case 0x21dd1cu: goto label_21dd1c;
        case 0x21dd40u: goto label_21dd40;
        case 0x21dd8cu: goto label_21dd8c;
        case 0x21ddc0u: goto label_21ddc0;
        case 0x21ddecu: goto label_21ddec;
        case 0x21de10u: goto label_21de10;
        case 0x21de20u: goto label_21de20;
        case 0x21de80u: goto label_21de80;
        case 0x21def4u: goto label_21def4;
        case 0x21df0cu: goto label_21df0c;
        case 0x21df14u: goto label_21df14;
        case 0x21df30u: goto label_21df30;
        default: break;
    }

    ctx->pc = 0x21db80u;

    // 0x21db80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21db80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21db84: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x21db84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x21db88: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21db88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21db8c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21db8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21db90: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21db90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21db94: 0x244288d0  addiu       $v0, $v0, -0x7730
    ctx->pc = 0x21db94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x21db98: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21db98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21db9c: 0x24668858  addiu       $a2, $v1, -0x77A8
    ctx->pc = 0x21db9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936664));
    // 0x21dba0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x21dba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x21dba4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21dba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21dba8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x21dba8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x21dbac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21dbacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x21dbb0: 0x8cc40020  lw          $a0, 0x20($a2)
    ctx->pc = 0x21dbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A8878u));
    // 0x21dbb4: 0x947106a8  lhu         $s1, 0x6A8($v1)
    ctx->pc = 0x21dbb4u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1704)));
    // 0x21dbb8: 0x10800030  beqz        $a0, . + 4 + (0x30 << 2)
    ctx->pc = 0x21DBB8u;
    {
        const bool branch_taken_0x21dbb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DBB8u;
        // 0x21dbbc: 0x94b206a8  lhu         $s2, 0x6A8($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dbb8) {
            ctx->pc = 0x21DC7Cu;
            goto label_21dc7c;
        }
    }
    ctx->pc = 0x21DBC0u;
    // 0x21dbc0: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x21dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x21dbc4: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x21DBC4u;
    {
        const bool branch_taken_0x21dbc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21dbc4) {
            ctx->pc = 0x21DBC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DBC4u;
            // 0x21dbc8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DC80u;
            goto label_21dc80;
        }
    }
    ctx->pc = 0x21DBCCu;
    // 0x21dbcc: 0xc082fae  jal         func_20BEB8
    ctx->pc = 0x21DBCCu;
    SET_GPR_U32(ctx, 31, 0x21DBD4u);
    ctx->pc = 0x21DBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DBCCu;
    // 0x21dbd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BEB8u, 0x21DBCCu, 0x21DBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DBD4u;
label_21dbd4:
    // 0x21dbd4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x21dbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x21dbd8: 0x24736c30  addiu       $s3, $v1, 0x6C30
    ctx->pc = 0x21dbd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 27696));
    // 0x21dbdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21dbdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dbe0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21dbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dbe4: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x21dbe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x21dbe8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x21dbe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21dbec: 0x2408010c  addiu       $t0, $zero, 0x10C
    ctx->pc = 0x21dbecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
    // 0x21dbf0: 0x2409004a  addiu       $t1, $zero, 0x4A
    ctx->pc = 0x21dbf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x21dbf4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x21DBF4u;
    {
        const bool branch_taken_0x21dbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DBF4u;
        // 0x21dbf8: 0x240a006e  addiu       $t2, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dbf4) {
            ctx->pc = 0x21DC7Cu;
            goto label_21dc7c;
        }
    }
    ctx->pc = 0x21DBFCu;
    // 0x21dbfc: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x21dbfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x21dc00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21DC00u;
    {
        const bool branch_taken_0x21dc00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC00u;
        // 0x21dc04: 0x232102a  slt         $v0, $s1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dc00) {
            ctx->pc = 0x21DC20u;
            goto label_21dc20;
        }
    }
    ctx->pc = 0x21DC08u;
    // 0x21dc08: 0x3c0b8080  lui         $t3, 0x8080
    ctx->pc = 0x21dc08u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32896 << 16));
    // 0x21dc0c: 0x3c1080ff  lui         $s0, 0x80FF
    ctx->pc = 0x21dc0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)33023 << 16));
    // 0x21dc10: 0x356b80ff  ori         $t3, $t3, 0x80FF
    ctx->pc = 0x21dc10u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)33023);
    // 0x21dc14: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x21DC14u;
    {
        const bool branch_taken_0x21dc14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC14u;
        // 0x21dc18: 0x36108080  ori         $s0, $s0, 0x8080 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32896);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dc14) {
            ctx->pc = 0x21DC4Cu;
            goto label_21dc4c;
        }
    }
    ctx->pc = 0x21DC1Cu;
    // 0x21dc1c: 0x0  nop
    ctx->pc = 0x21dc1cu;
    // NOP
label_21dc20:
    // 0x21dc20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21DC20u;
    {
        const bool branch_taken_0x21dc20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21dc20) {
            ctx->pc = 0x21DC40u;
            goto label_21dc40;
        }
    }
    ctx->pc = 0x21DC28u;
    // 0x21dc28: 0x3c108080  lui         $s0, 0x8080
    ctx->pc = 0x21dc28u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32896 << 16));
    // 0x21dc2c: 0x3c0b80ff  lui         $t3, 0x80FF
    ctx->pc = 0x21dc2cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)33023 << 16));
    // 0x21dc30: 0x361080ff  ori         $s0, $s0, 0x80FF
    ctx->pc = 0x21dc30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)33023);
    // 0x21dc34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21DC34u;
    {
        const bool branch_taken_0x21dc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC34u;
        // 0x21dc38: 0x356b8080  ori         $t3, $t3, 0x8080 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32896);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dc34) {
            ctx->pc = 0x21DC4Cu;
            goto label_21dc4c;
        }
    }
    ctx->pc = 0x21DC3Cu;
    // 0x21dc3c: 0x0  nop
    ctx->pc = 0x21dc3cu;
    // NOP
label_21dc40:
    // 0x21dc40: 0x3c1080ff  lui         $s0, 0x80FF
    ctx->pc = 0x21dc40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)33023 << 16));
    // 0x21dc44: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x21dc44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x21dc48: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x21dc48u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21dc4c:
    // 0x21dc4c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x21DC4Cu;
    SET_GPR_U32(ctx, 31, 0x21DC54u);
    ctx->pc = 0x21DC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DC4Cu;
    // 0x21dc50: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x21DC4Cu, 0x21DC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DC54u;
label_21dc54:
    // 0x21dc54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21dc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dc58: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x21dc58u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dc5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21dc5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dc60: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x21dc60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x21dc64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21dc64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dc68: 0x24080174  addiu       $t0, $zero, 0x174
    ctx->pc = 0x21dc68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 372));
    // 0x21dc6c: 0x2409004a  addiu       $t1, $zero, 0x4A
    ctx->pc = 0x21dc6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x21dc70: 0x240a006e  addiu       $t2, $zero, 0x6E
    ctx->pc = 0x21dc70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x21dc74: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x21DC74u;
    SET_GPR_U32(ctx, 31, 0x21DC7Cu);
    ctx->pc = 0x21DC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DC74u;
    // 0x21dc78: 0xafb20000  sw          $s2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x21DC74u, 0x21DC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DC7Cu;
label_21dc7c:
    // 0x21dc7c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21dc7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21dc80:
    // 0x21dc80: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21dc80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21dc84: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21dc84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21dc88: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x21dc88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21dc8c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21dc8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21dc90: 0x3e00008  jr          $ra
    ctx->pc = 0x21DC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC90u;
        // 0x21dc94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DC90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21DC98u;
label_21dc98:
    // 0x21dc98: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x21dc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x21dc9c: 0xffb00120  sd          $s0, 0x120($sp)
    ctx->pc = 0x21dc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 16));
    // 0x21dca0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21dca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dca4: 0xffb10128  sd          $s1, 0x128($sp)
    ctx->pc = 0x21dca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 17));
    // 0x21dca8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21dca8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dcac: 0xffb20130  sd          $s2, 0x130($sp)
    ctx->pc = 0x21dcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
    // 0x21dcb0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x21dcb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dcb4: 0xffb30138  sd          $s3, 0x138($sp)
    ctx->pc = 0x21dcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 19));
    // 0x21dcb8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x21dcb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dcbc: 0xffb40140  sd          $s4, 0x140($sp)
    ctx->pc = 0x21dcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x21dcc0: 0xffbf0148  sd          $ra, 0x148($sp)
    ctx->pc = 0x21dcc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
    // 0x21dcc4: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x21DCC4u;
    SET_GPR_U32(ctx, 31, 0x21DCCCu);
    ctx->pc = 0x21DCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DCC4u;
    // 0x21dcc8: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x21DCC4u, 0x21DCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DCCCu;
label_21dccc:
    // 0x21dccc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x21dcccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x21dcd0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x21dcd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dcd4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21dcd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dcd8: 0xc0cc3c8  jal         func_330F20
    ctx->pc = 0x21DCD8u;
    SET_GPR_U32(ctx, 31, 0x21DCE0u);
    ctx->pc = 0x21DCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DCD8u;
    // 0x21dcdc: 0x24050102  addiu       $a1, $zero, 0x102 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330F20u, 0x21DCD8u, 0x21DCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DCE0u;
label_21dce0:
    // 0x21dce0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21dce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dce4: 0xc0a6402  jal         func_299008
    ctx->pc = 0x21DCE4u;
    SET_GPR_U32(ctx, 31, 0x21DCECu);
    ctx->pc = 0x21DCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DCE4u;
    // 0x21dce8: 0xa7a00110  sh          $zero, 0x110($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 272), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299008u, 0x21DCE4u, 0x21DCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DCECu;
label_21dcec:
    // 0x21dcec: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21dcecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21dcf0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x21dcf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dcf4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x21dcf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dcf8: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x21dcf8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dcfc: 0x260582d  daddu       $t3, $s3, $zero
    ctx->pc = 0x21dcfcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dd00: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x21dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x21dd04: 0x24846c48  addiu       $a0, $a0, 0x6C48
    ctx->pc = 0x21dd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27720));
    // 0x21dd08: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x21dd08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21dd0c: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x21dd0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x21dd10: 0x2409006e  addiu       $t1, $zero, 0x6E
    ctx->pc = 0x21dd10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x21dd14: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x21DD14u;
    SET_GPR_U32(ctx, 31, 0x21DD1Cu);
    ctx->pc = 0x21DD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DD14u;
    // 0x21dd18: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x21DD14u, 0x21DD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DD1Cu;
label_21dd1c:
    // 0x21dd1c: 0xdfb00120  ld          $s0, 0x120($sp)
    ctx->pc = 0x21dd1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x21dd20: 0xdfb10128  ld          $s1, 0x128($sp)
    ctx->pc = 0x21dd20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x21dd24: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x21dd24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x21dd28: 0xdfb30138  ld          $s3, 0x138($sp)
    ctx->pc = 0x21dd28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x21dd2c: 0xdfb40140  ld          $s4, 0x140($sp)
    ctx->pc = 0x21dd2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x21dd30: 0xdfbf0148  ld          $ra, 0x148($sp)
    ctx->pc = 0x21dd30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x21dd34: 0x3e00008  jr          $ra
    ctx->pc = 0x21DD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD34u;
        // 0x21dd38: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DD34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21DD3Cu;
    // 0x21dd3c: 0x0  nop
    ctx->pc = 0x21dd3cu;
    // NOP
label_21dd40:
    // 0x21dd40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21dd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21dd44: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21dd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21dd48: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x21dd48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dd4c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21dd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21dd50: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21dd50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dd54: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21dd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21dd58: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21dd58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dd5c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x21dd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x21dd60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21dd60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dd64: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x21dd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x21dd68: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x21dd68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dd6c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x21dd6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x21dd70: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x21dd70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dd74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21dd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x21dd78: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x21dd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x21dd7c: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x21dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x21dd80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21dd84: 0xc08753c  jal         func_21D4F0
    ctx->pc = 0x21DD84u;
    SET_GPR_U32(ctx, 31, 0x21DD8Cu);
    ctx->pc = 0x21DD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DD84u;
    // 0x21dd88: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D4F0u, 0x21DD84u, 0x21DD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DD8Cu;
label_21dd8c:
    // 0x21dd8c: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x21dd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x21dd90: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21dd90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21dd94: 0x24846c60  addiu       $a0, $a0, 0x6C60
    ctx->pc = 0x21dd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27744));
    // 0x21dd98: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21dd98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dd9c: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x21dd9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21dda0: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x21dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x21dda4: 0x2e6303e8  sltiu       $v1, $s3, 0x3E8
    ctx->pc = 0x21dda4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)1000) ? 1 : 0);
    // 0x21dda8: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x21dda8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ddac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x21ddacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21ddb0: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x21ddb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x21ddb4: 0x2408006e  addiu       $t0, $zero, 0x6E
    ctx->pc = 0x21ddb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x21ddb8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x21DDB8u;
    SET_GPR_U32(ctx, 31, 0x21DDC0u);
    ctx->pc = 0x21DDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DDB8u;
    // 0x21ddbc: 0x43980a  movz        $s3, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x21DDB8u, 0x21DDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DDC0u;
label_21ddc0:
    // 0x21ddc0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21ddc4: 0x8c4383c0  lw          $v1, -0x7C40($v0)
    ctx->pc = 0x21ddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x21ddc8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x21DDC8u;
    {
        const bool branch_taken_0x21ddc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ddc8) {
            ctx->pc = 0x21DDE4u;
            goto label_21dde4;
        }
    }
    ctx->pc = 0x21DDD0u;
    // 0x21ddd0: 0x92420028  lbu         $v0, 0x28($s2)
    ctx->pc = 0x21ddd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x21ddd4: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x21ddd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x21ddd8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x21ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21dddc: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x21DDDCu;
    {
        const bool branch_taken_0x21dddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21dddc) {
            ctx->pc = 0x21DDE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DDDCu;
            // 0x21dde0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DE18u;
            goto label_21de18;
        }
    }
    ctx->pc = 0x21DDE4u;
label_21dde4:
    // 0x21dde4: 0xc0a6402  jal         func_299008
    ctx->pc = 0x21DDE4u;
    SET_GPR_U32(ctx, 31, 0x21DDECu);
    ctx->pc = 0x21DDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DDE4u;
    // 0x21dde8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299008u, 0x21DDE4u, 0x21DDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DDECu;
label_21ddec:
    // 0x21ddec: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21ddecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21ddf0: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x21ddf0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21ddf4: 0x24846c70  addiu       $a0, $a0, 0x6C70
    ctx->pc = 0x21ddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27760));
    // 0x21ddf8: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x21ddf8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21ddfc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x21ddfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21de00: 0x8faa000c  lw          $t2, 0xC($sp)
    ctx->pc = 0x21de00u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x21de04: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x21de04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21de08: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x21DE08u;
    SET_GPR_U32(ctx, 31, 0x21DE10u);
    ctx->pc = 0x21DE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DE08u;
    // 0x21de0c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x21DE08u, 0x21DE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DE10u;
label_21de10:
    // 0x21de10: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x21DE10u;
    {
        const bool branch_taken_0x21de10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE10u;
        // 0x21de14: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21de10) {
            ctx->pc = 0x21DF34u;
            goto label_21df34;
        }
    }
    ctx->pc = 0x21DE18u;
label_21de18:
    // 0x21de18: 0xc0a6402  jal         func_299008
    ctx->pc = 0x21DE18u;
    SET_GPR_U32(ctx, 31, 0x21DE20u);
    ctx->pc = 0x21DE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DE18u;
    // 0x21de1c: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299008u, 0x21DE18u, 0x21DE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DE20u;
label_21de20:
    // 0x21de20: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x21de20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x21de24: 0x2604bf10  addiu       $a0, $s0, -0x40F0
    ctx->pc = 0x21de24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950672));
    // 0x21de28: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x21de28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x21de2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21de2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21de30: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x21de30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21de34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x21de34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x21de38: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x21de38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x21de3c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x21de3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21de40: 0x438824  and         $s1, $v0, $v1
    ctx->pc = 0x21de40u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x21de44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x21de44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21de48: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x21de48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21de4c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x21de4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x21de50: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x21de50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x21de54: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x21DE54u;
    {
        const bool branch_taken_0x21de54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE54u;
        // 0x21de58: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21de54) {
            ctx->pc = 0x21DE74u;
            goto label_21de74;
        }
    }
    ctx->pc = 0x21DE5Cu;
    // 0x21de5c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x21de5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x21de60: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x21de60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x21de64: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x21de64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x21de68: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x21de68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x21de6c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21de6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21de70: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x21de70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_21de74:
    // 0x21de74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21de74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21de78: 0xc0a6402  jal         func_299008
    ctx->pc = 0x21DE78u;
    SET_GPR_U32(ctx, 31, 0x21DE80u);
    ctx->pc = 0x21DE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DE78u;
    // 0x21de7c: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299008u, 0x21DE78u, 0x21DE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DE80u;
label_21de80:
    // 0x21de80: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x21de80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x21de84: 0x2604bf10  addiu       $a0, $s0, -0x40F0
    ctx->pc = 0x21de84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950672));
    // 0x21de88: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x21de88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x21de8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21de8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21de90: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x21de90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21de94: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x21de94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x21de98: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x21de98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x21de9c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x21de9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21dea0: 0x438024  and         $s0, $v0, $v1
    ctx->pc = 0x21dea0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x21dea4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x21dea4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21dea8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x21dea8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21deac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x21deacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x21deb0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x21deb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x21deb4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x21DEB4u;
    {
        const bool branch_taken_0x21deb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DEB4u;
        // 0x21deb8: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21deb4) {
            ctx->pc = 0x21DED0u;
            goto label_21ded0;
        }
    }
    ctx->pc = 0x21DEBCu;
    // 0x21debc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x21debcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x21dec0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x21dec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x21dec4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x21dec4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x21dec8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x21dec8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x21decc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21deccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_21ded0:
    // 0x21ded0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21ded0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21ded4: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x21ded4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21ded8: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x21ded8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x21dedc: 0x8fa9000c  lw          $t1, 0xC($sp)
    ctx->pc = 0x21dedcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x21dee0: 0x24846c90  addiu       $a0, $a0, 0x6C90
    ctx->pc = 0x21dee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27792));
    // 0x21dee4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x21dee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dee8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x21dee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21deec: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x21DEECu;
    SET_GPR_U32(ctx, 31, 0x21DEF4u);
    ctx->pc = 0x21DEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DEECu;
    // 0x21def0: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x21DEECu, 0x21DEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DEF4u;
label_21def4:
    // 0x21def4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21def4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21def8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x21def8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21defc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21defcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21df00: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x21df00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21df04: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x21DF04u;
    SET_GPR_U32(ctx, 31, 0x21DF0Cu);
    ctx->pc = 0x21DF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DF04u;
    // 0x21df08: 0x24846ca8  addiu       $a0, $a0, 0x6CA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x21DF04u, 0x21DF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DF0Cu;
label_21df0c:
    // 0x21df0c: 0xc0a6402  jal         func_299008
    ctx->pc = 0x21DF0Cu;
    SET_GPR_U32(ctx, 31, 0x21DF14u);
    ctx->pc = 0x21DF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DF0Cu;
    // 0x21df10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299008u, 0x21DF0Cu, 0x21DF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DF14u;
label_21df14:
    // 0x21df14: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21df14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21df18: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x21df18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21df1c: 0x24846cb8  addiu       $a0, $a0, 0x6CB8
    ctx->pc = 0x21df1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27832));
    // 0x21df20: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x21df20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21df24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21df24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21df28: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x21DF28u;
    SET_GPR_U32(ctx, 31, 0x21DF30u);
    ctx->pc = 0x21DF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DF28u;
    // 0x21df2c: 0x8fa8000c  lw          $t0, 0xC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x21DF28u, 0x21DF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DF30u;
label_21df30:
    // 0x21df30: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21df30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21df34:
    // 0x21df34: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21df34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21df38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21df38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21df3c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x21df3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21df40: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x21df40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21df44: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x21df44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21df48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21df48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21df4c: 0x3e00008  jr          $ra
    ctx->pc = 0x21DF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF4Cu;
        // 0x21df50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21DF54u;
    // 0x21df54: 0x0  nop
    ctx->pc = 0x21df54u;
    // NOP
    ctx->pc = 0x21df58u;
}
