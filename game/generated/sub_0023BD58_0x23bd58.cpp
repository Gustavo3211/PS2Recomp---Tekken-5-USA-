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

// Function: sub_0023BD58
// Address: 0x23bd58 - 0x23be80
void sub_0023BD58_0x23bd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BD58_0x23bd58");
#endif

    switch (ctx->pc) {
        case 0x23bd90u: goto label_23bd90;
        case 0x23bd98u: goto label_23bd98;
        case 0x23bda0u: goto label_23bda0;
        case 0x23bdd0u: goto label_23bdd0;
        case 0x23bde4u: goto label_23bde4;
        case 0x23be10u: goto label_23be10;
        case 0x23be3cu: goto label_23be3c;
        default: break;
    }

    ctx->pc = 0x23bd58u;

    // 0x23bd58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23bd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23bd5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23bd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23bd60: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23bd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23bd64: 0x3c130016  lui         $s3, 0x16
    ctx->pc = 0x23bd64u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)22 << 16));
    // 0x23bd68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23bd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23bd6c: 0x2663d748  addiu       $v1, $s3, -0x28B8
    ctx->pc = 0x23bd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956872));
    // 0x23bd70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23bd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23bd74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23bd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23bd78: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x23bd78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x15D74Cu));
    // 0x23bd7c: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23BD7Cu;
    {
        const bool branch_taken_0x23bd7c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23BD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD7Cu;
        // 0x23bd80: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd7c) {
            ctx->pc = 0x23BDB4u;
            goto label_23bdb4;
        }
    }
    ctx->pc = 0x23BD84u;
    // 0x23bd84: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x23bd84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bd88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23bd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bd8c: 0x0  nop
    ctx->pc = 0x23bd8cu;
    // NOP
label_23bd90:
    // 0x23bd90: 0xc08ebc2  jal         func_23AF08
    ctx->pc = 0x23BD90u;
    SET_GPR_U32(ctx, 31, 0x23BD98u);
    ctx->pc = 0x23BD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BD90u;
    // 0x23bd94: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AF08u, 0x23BD90u, 0x23BD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BD98u;
label_23bd98:
    // 0x23bd98: 0xc08ee56  jal         func_23B958
    ctx->pc = 0x23BD98u;
    SET_GPR_U32(ctx, 31, 0x23BDA0u);
    ctx->pc = 0x23BD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BD98u;
    // 0x23bd9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B958u, 0x23BD98u, 0x23BDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BDA0u;
label_23bda0:
    // 0x23bda0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x23bda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x23bda4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x23bda4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23bda8: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x23BDA8u;
    {
        const bool branch_taken_0x23bda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23bda8) {
            ctx->pc = 0x23BDACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BDA8u;
            // 0x23bdac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BD90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23bd90;
        }
    }
    ctx->pc = 0x23BDB0u;
    // 0x23bdb0: 0x2663d748  addiu       $v1, $s3, -0x28B8
    ctx->pc = 0x23bdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956872));
label_23bdb4:
    // 0x23bdb4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x23bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x23bdb8: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23BDB8u;
    {
        const bool branch_taken_0x23bdb8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23BDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BDB8u;
        // 0x23bdbc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bdb8) {
            ctx->pc = 0x23BDF4u;
            goto label_23bdf4;
        }
    }
    ctx->pc = 0x23BDC0u;
    // 0x23bdc0: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x23bdc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bdc4: 0x24710030  addiu       $s1, $v1, 0x30
    ctx->pc = 0x23bdc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x23bdc8: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x23bdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x23bdcc: 0x0  nop
    ctx->pc = 0x23bdccu;
    // NOP
label_23bdd0:
    // 0x23bdd0: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x23bdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x23bdd4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23bdd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x23bdd8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x23bdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x23bddc: 0xc08ef3c  jal         func_23BCF0
    ctx->pc = 0x23BDDCu;
    SET_GPR_U32(ctx, 31, 0x23BDE4u);
    ctx->pc = 0x23BDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BDDCu;
    // 0x23bde0: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCF0u, 0x23BDDCu, 0x23BDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BDE4u;
label_23bde4:
    // 0x23bde4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x23bde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x23bde8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x23bde8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23bdec: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23BDECu;
    {
        const bool branch_taken_0x23bdec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23bdec) {
            ctx->pc = 0x23BDF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BDECu;
            // 0x23bdf0: 0x1020c0  sll         $a0, $s0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BDD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23bdd0;
        }
    }
    ctx->pc = 0x23BDF4u;
label_23bdf4:
    // 0x23bdf4: 0x2663d748  addiu       $v1, $s3, -0x28B8
    ctx->pc = 0x23bdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956872));
    // 0x23bdf8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x23bdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x23bdfc: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x23BDFCu;
    {
        const bool branch_taken_0x23bdfc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BDFCu;
        // 0x23be00: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bdfc) {
            ctx->pc = 0x23BE4Cu;
            goto label_23be4c;
        }
    }
    ctx->pc = 0x23BE04u;
    // 0x23be04: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x23be04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23be08: 0x24710030  addiu       $s1, $v1, 0x30
    ctx->pc = 0x23be08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x23be0c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x23be0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_23be10:
    // 0x23be10: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x23be10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23be14: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23be14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x23be18: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x23be18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x23be1c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x23be1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23be20: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x23be20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x23be24: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x23be24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23be28: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23BE28u;
    {
        const bool branch_taken_0x23be28 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23BE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE28u;
        // 0x23be2c: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be28) {
            ctx->pc = 0x23BE3Cu;
            goto label_23be3c;
        }
    }
    ctx->pc = 0x23BE30u;
    // 0x23be30: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x23be30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23be34: 0xc08ee84  jal         func_23BA10
    ctx->pc = 0x23BE34u;
    SET_GPR_U32(ctx, 31, 0x23BE3Cu);
    ctx->pc = 0x23BE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BE34u;
    // 0x23be38: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BA10u, 0x23BE34u, 0x23BE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BE3Cu;
label_23be3c:
    // 0x23be3c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x23be3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x23be40: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x23be40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23be44: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x23BE44u;
    {
        const bool branch_taken_0x23be44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE44u;
        // 0x23be48: 0x1010c0  sll         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be44) {
            ctx->pc = 0x23BE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23be10;
        }
    }
    ctx->pc = 0x23BE4Cu;
label_23be4c:
    // 0x23be4c: 0x2662d748  addiu       $v0, $s3, -0x28B8
    ctx->pc = 0x23be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956872));
    // 0x23be50: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23be50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23be54: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x23be54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23be58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23be58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23be5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23be5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23be60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23be60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23be64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23be64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23be68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23be68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23be6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23be6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23be70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23be70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23be74: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x23be74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x23be78: 0x3e00008  jr          $ra
    ctx->pc = 0x23BE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE78u;
        // 0x23be7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BE78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BE80u;
}
