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

// Function: sub_0048BDD8
// Address: 0x48bdd8 - 0x48bef8
void sub_0048BDD8_0x48bdd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048BDD8_0x48bdd8");
#endif

    switch (ctx->pc) {
        case 0x48be08u: goto label_48be08;
        case 0x48be10u: goto label_48be10;
        case 0x48be18u: goto label_48be18;
        case 0x48be30u: goto label_48be30;
        case 0x48be8cu: goto label_48be8c;
        case 0x48be94u: goto label_48be94;
        case 0x48bea0u: goto label_48bea0;
        case 0x48beb8u: goto label_48beb8;
        case 0x48bec4u: goto label_48bec4;
        case 0x48beccu: goto label_48becc;
        default: break;
    }

    ctx->pc = 0x48bdd8u;

    // 0x48bdd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48bdd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48bddc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x48bddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x48bde0: 0x3c130073  lui         $s3, 0x73
    ctx->pc = 0x48bde0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)115 << 16));
    // 0x48bde4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48bde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48bde8: 0x2670d680  addiu       $s0, $s3, -0x2980
    ctx->pc = 0x48bde8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956672));
    // 0x48bdec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x48bdecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x48bdf0: 0x26110018  addiu       $s1, $s0, 0x18
    ctx->pc = 0x48bdf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x48bdf4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x48bdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x48bdf8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x48bdf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48bdfc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x48bdfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x48be00: 0xc122fbe  jal         func_48BEF8
    ctx->pc = 0x48BE00u;
    SET_GPR_U32(ctx, 31, 0x48BE08u);
    ctx->pc = 0x48BE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48BE00u;
    // 0x48be04: 0xa6000096  sh          $zero, 0x96($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 150), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BEF8u, 0x48BE00u, 0x48BE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BE08u;
label_48be08:
    // 0x48be08: 0xc124910  jal         func_492440
    ctx->pc = 0x48BE08u;
    SET_GPR_U32(ctx, 31, 0x48BE10u);
    ctx->pc = 0x48BE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48BE08u;
    // 0x48be0c: 0x3c04000d  lui         $a0, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)13 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x48BE08u, 0x48BE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BE10u;
label_48be10:
    // 0x48be10: 0xc12a294  jal         func_4A8A50
    ctx->pc = 0x48BE10u;
    SET_GPR_U32(ctx, 31, 0x48BE18u);
    ctx->pc = 0x4A8A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8A50u, 0x48BE10u, 0x48BE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BE18u;
label_48be18:
    // 0x48be18: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x48be18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x48be1c: 0xae0222a0  sw          $v0, 0x22A0($s0)
    ctx->pc = 0x48be1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8864), GPR_U32(ctx, 2));
    // 0x48be20: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x48BE20u;
    {
        const bool branch_taken_0x48be20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x48BE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BE20u;
        // 0x48be24: 0x96220000  lhu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48be20) {
            ctx->pc = 0x48BE34u;
            goto label_48be34;
        }
    }
    ctx->pc = 0x48BE28u;
    // 0x48be28: 0xc12413e  jal         func_4904F8
    ctx->pc = 0x48BE28u;
    SET_GPR_U32(ctx, 31, 0x48BE30u);
    ctx->pc = 0x48BE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48BE28u;
    // 0x48be2c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4904F8u, 0x48BE28u, 0x48BE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BE30u;
label_48be30:
    // 0x48be30: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x48be30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_48be34:
    // 0x48be34: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x48be34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x48be38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48be38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48be3c: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x48be3cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48be40: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x48BE40u;
    {
        const bool branch_taken_0x48be40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x48BE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BE40u;
        // 0x48be44: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x48be40) {
            ctx->pc = 0x48BE68u;
            goto label_48be68;
        }
    }
    ctx->pc = 0x48BE48u;
    // 0x48be48: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x48BE48u;
    {
        const bool branch_taken_0x48be48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48BE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BE48u;
        // 0x48be4c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48be48) {
            ctx->pc = 0x48BE74u;
            goto label_48be74;
        }
    }
    ctx->pc = 0x48BE50u;
    // 0x48be50: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x48BE50u;
    {
        const bool branch_taken_0x48be50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x48BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BE50u;
        // 0x48be54: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48be50) {
            ctx->pc = 0x48BE70u;
            goto label_48be70;
        }
    }
    ctx->pc = 0x48BE58u;
    // 0x48be58: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x48BE58u;
    {
        const bool branch_taken_0x48be58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x48be58) {
            ctx->pc = 0x48BE5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48BE58u;
            // 0x48be5c: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48BE74u;
            goto label_48be74;
        }
    }
    ctx->pc = 0x48BE60u;
    // 0x48be60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48BE60u;
    {
        const bool branch_taken_0x48be60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48be60) {
            ctx->pc = 0x48BE74u;
            goto label_48be74;
        }
    }
    ctx->pc = 0x48BE68u;
label_48be68:
    // 0x48be68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x48BE68u;
    {
        const bool branch_taken_0x48be68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BE68u;
        // 0x48be6c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48be68) {
            ctx->pc = 0x48BE74u;
            goto label_48be74;
        }
    }
    ctx->pc = 0x48BE70u;
label_48be70:
    // 0x48be70: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x48be70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_48be74:
    // 0x48be74: 0x6410005  bgez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x48BE74u;
    {
        const bool branch_taken_0x48be74 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x48BE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BE74u;
        // 0x48be78: 0x2662d680  addiu       $v0, $s3, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48be74) {
            ctx->pc = 0x48BE8Cu;
            goto label_48be8c;
        }
    }
    ctx->pc = 0x48BE7Cu;
    // 0x48be7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x48be7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48be80: 0xa4400018  sh          $zero, 0x18($v0)
    ctx->pc = 0x48be80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x48be84: 0xc12413e  jal         func_4904F8
    ctx->pc = 0x48BE84u;
    SET_GPR_U32(ctx, 31, 0x48BE8Cu);
    ctx->pc = 0x48BE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48BE84u;
    // 0x48be88: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4904F8u, 0x48BE84u, 0x48BE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BE8Cu;
label_48be8c:
    // 0x48be8c: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x48BE8Cu;
    SET_GPR_U32(ctx, 31, 0x48BE94u);
    ctx->pc = 0x48BE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48BE8Cu;
    // 0x48be90: 0x2670d680  addiu       $s0, $s3, -0x2980 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x48BE8Cu, 0x48BE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BE94u;
label_48be94:
    // 0x48be94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x48be94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48be98: 0xc1284ba  jal         func_4A12E8
    ctx->pc = 0x48BE98u;
    SET_GPR_U32(ctx, 31, 0x48BEA0u);
    ctx->pc = 0x48BE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48BE98u;
    // 0x48be9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A12E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A12E8u, 0x48BE98u, 0x48BEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BEA0u;
label_48bea0:
    // 0x48bea0: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x48bea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x48bea4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x48bea4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x48bea8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x48bea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48beac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x48beacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x48beb0: 0xc128028  jal         func_4A00A0
    ctx->pc = 0x48BEB0u;
    SET_GPR_U32(ctx, 31, 0x48BEB8u);
    ctx->pc = 0x48BEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48BEB0u;
    // 0x48beb4: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A00A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A00A0u, 0x48BEB0u, 0x48BEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BEB8u;
label_48beb8:
    // 0x48beb8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x48beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x48bebc: 0xc124c72  jal         func_4931C8
    ctx->pc = 0x48BEBCu;
    SET_GPR_U32(ctx, 31, 0x48BEC4u);
    ctx->pc = 0x48BEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48BEBCu;
    // 0x48bec0: 0xa602220a  sh          $v0, 0x220A($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 8714), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4931C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4931C8u, 0x48BEBCu, 0x48BEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BEC4u;
label_48bec4:
    // 0x48bec4: 0xc124620  jal         func_491880
    ctx->pc = 0x48BEC4u;
    SET_GPR_U32(ctx, 31, 0x48BECCu);
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x48BEC4u, 0x48BECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BECCu;
label_48becc:
    // 0x48becc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48beccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48bed0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48bed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48bed4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x48bed4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48bed8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x48bed8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48bedc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x48bedcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x48bee0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48bee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48bee4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x48bee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x48bee8: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x48bee8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x48beec: 0xa423e820  sh          $v1, -0x17E0($at)
    ctx->pc = 0x48beecu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961184), (uint16_t)GPR_U32(ctx, 3));
    // 0x48bef0: 0x3e00008  jr          $ra
    ctx->pc = 0x48BEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48BEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BEF0u;
        // 0x48bef4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48BEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48BEF8u;
}
