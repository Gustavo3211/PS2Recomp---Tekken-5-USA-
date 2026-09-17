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

// Function: sub_0031EC40
// Address: 0x31ec40 - 0x31ed68
void sub_0031EC40_0x31ec40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031EC40_0x31ec40");
#endif

    switch (ctx->pc) {
        case 0x31ec40u: goto label_31ec40;
        case 0x31ec44u: goto label_31ec44;
        case 0x31ec48u: goto label_31ec48;
        case 0x31ec4cu: goto label_31ec4c;
        case 0x31ec50u: goto label_31ec50;
        case 0x31ec54u: goto label_31ec54;
        case 0x31ec58u: goto label_31ec58;
        case 0x31ec5cu: goto label_31ec5c;
        case 0x31ec60u: goto label_31ec60;
        case 0x31ec64u: goto label_31ec64;
        case 0x31ec68u: goto label_31ec68;
        case 0x31ec6cu: goto label_31ec6c;
        case 0x31ec70u: goto label_31ec70;
        case 0x31ec74u: goto label_31ec74;
        case 0x31ec78u: goto label_31ec78;
        case 0x31ec7cu: goto label_31ec7c;
        case 0x31ec80u: goto label_31ec80;
        case 0x31ec84u: goto label_31ec84;
        case 0x31ec88u: goto label_31ec88;
        case 0x31ec8cu: goto label_31ec8c;
        case 0x31ec90u: goto label_31ec90;
        case 0x31ec94u: goto label_31ec94;
        case 0x31ec98u: goto label_31ec98;
        case 0x31ec9cu: goto label_31ec9c;
        case 0x31eca0u: goto label_31eca0;
        case 0x31eca4u: goto label_31eca4;
        case 0x31eca8u: goto label_31eca8;
        case 0x31ecacu: goto label_31ecac;
        case 0x31ecb0u: goto label_31ecb0;
        case 0x31ecb4u: goto label_31ecb4;
        case 0x31ecb8u: goto label_31ecb8;
        case 0x31ecbcu: goto label_31ecbc;
        case 0x31ecc0u: goto label_31ecc0;
        case 0x31ecc4u: goto label_31ecc4;
        case 0x31ecc8u: goto label_31ecc8;
        case 0x31ecccu: goto label_31eccc;
        case 0x31ecd0u: goto label_31ecd0;
        case 0x31ecd4u: goto label_31ecd4;
        case 0x31ecd8u: goto label_31ecd8;
        case 0x31ecdcu: goto label_31ecdc;
        case 0x31ece0u: goto label_31ece0;
        case 0x31ece4u: goto label_31ece4;
        case 0x31ece8u: goto label_31ece8;
        case 0x31ececu: goto label_31ecec;
        case 0x31ecf0u: goto label_31ecf0;
        case 0x31ecf4u: goto label_31ecf4;
        case 0x31ecf8u: goto label_31ecf8;
        case 0x31ecfcu: goto label_31ecfc;
        case 0x31ed00u: goto label_31ed00;
        case 0x31ed04u: goto label_31ed04;
        case 0x31ed08u: goto label_31ed08;
        case 0x31ed0cu: goto label_31ed0c;
        case 0x31ed10u: goto label_31ed10;
        case 0x31ed14u: goto label_31ed14;
        case 0x31ed18u: goto label_31ed18;
        case 0x31ed1cu: goto label_31ed1c;
        case 0x31ed20u: goto label_31ed20;
        case 0x31ed24u: goto label_31ed24;
        case 0x31ed28u: goto label_31ed28;
        case 0x31ed2cu: goto label_31ed2c;
        case 0x31ed30u: goto label_31ed30;
        case 0x31ed34u: goto label_31ed34;
        case 0x31ed38u: goto label_31ed38;
        case 0x31ed3cu: goto label_31ed3c;
        case 0x31ed40u: goto label_31ed40;
        case 0x31ed44u: goto label_31ed44;
        case 0x31ed48u: goto label_31ed48;
        case 0x31ed4cu: goto label_31ed4c;
        case 0x31ed50u: goto label_31ed50;
        case 0x31ed54u: goto label_31ed54;
        case 0x31ed58u: goto label_31ed58;
        case 0x31ed5cu: goto label_31ed5c;
        case 0x31ed60u: goto label_31ed60;
        case 0x31ed64u: goto label_31ed64;
        default: break;
    }

    ctx->pc = 0x31ec40u;

label_31ec40:
    // 0x31ec40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31ec40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_31ec44:
    // 0x31ec44: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x31ec44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_31ec48:
    // 0x31ec48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31ec48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_31ec4c:
    // 0x31ec4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31ec4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31ec50:
    // 0x31ec50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31ec50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_31ec54:
    // 0x31ec54: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x31ec54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31ec58:
    // 0x31ec58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x31ec58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_31ec5c:
    // 0x31ec5c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x31ec5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_31ec60:
    // 0x31ec60: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x31ec60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_31ec64:
    // 0x31ec64: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x31ec64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_31ec68:
    // 0x31ec68: 0x96070400  lhu         $a3, 0x400($s0)
    ctx->pc = 0x31ec68u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1024)));
label_31ec6c:
    // 0x31ec6c: 0x10e30035  beq         $a3, $v1, . + 4 + (0x35 << 2)
label_31ec70:
    if (ctx->pc == 0x31EC70u) {
        ctx->pc = 0x31EC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC6Cu;
        // 0x31ec70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EC74u;
        goto label_31ec74;
    }
    ctx->pc = 0x31EC6Cu;
    {
        const bool branch_taken_0x31ec6c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x31EC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC6Cu;
        // 0x31ec70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ec6c) {
            ctx->pc = 0x31ED44u;
            goto label_31ed44;
        }
    }
    ctx->pc = 0x31EC74u;
label_31ec74:
    // 0x31ec74: 0x96030402  lhu         $v1, 0x402($s0)
    ctx->pc = 0x31ec74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1026)));
label_31ec78:
    // 0x31ec78: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x31ec78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_31ec7c:
    // 0x31ec7c: 0x96020404  lhu         $v0, 0x404($s0)
    ctx->pc = 0x31ec7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1028)));
label_31ec80:
    // 0x31ec80: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31ec80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31ec84:
    // 0x31ec84: 0xa607040a  sh          $a3, 0x40A($s0)
    ctx->pc = 0x31ec84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1034), (uint16_t)GPR_U32(ctx, 7));
label_31ec88:
    // 0x31ec88: 0xa603040c  sh          $v1, 0x40C($s0)
    ctx->pc = 0x31ec88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1036), (uint16_t)GPR_U32(ctx, 3));
label_31ec8c:
    // 0x31ec8c: 0xc0c7b66  jal         func_31ED98
label_31ec90:
    if (ctx->pc == 0x31EC90u) {
        ctx->pc = 0x31EC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC8Cu;
        // 0x31ec90: 0xa602040e  sh          $v0, 0x40E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1038), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EC94u;
        goto label_31ec94;
    }
    ctx->pc = 0x31EC8Cu;
    SET_GPR_U32(ctx, 31, 0x31EC94u);
    ctx->pc = 0x31EC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EC8Cu;
    // 0x31ec90: 0xa602040e  sh          $v0, 0x40E($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1038), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED98u, 0x31EC8Cu, 0x31EC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EC94u;
label_31ec94:
    // 0x31ec94: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x31ec94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31ec98:
    // 0x31ec98: 0x1280002a  beqz        $s4, . + 4 + (0x2A << 2)
label_31ec9c:
    if (ctx->pc == 0x31EC9Cu) {
        ctx->pc = 0x31EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC98u;
        // 0x31ec9c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ECA0u;
        goto label_31eca0;
    }
    ctx->pc = 0x31EC98u;
    {
        const bool branch_taken_0x31ec98 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC98u;
        // 0x31ec9c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ec98) {
            ctx->pc = 0x31ED44u;
            goto label_31ed44;
        }
    }
    ctx->pc = 0x31ECA0u;
label_31eca0:
    // 0x31eca0: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x31eca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_31eca4:
    // 0x31eca4: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x31eca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_31eca8:
    // 0x31eca8: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x31eca8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_31ecac:
    // 0x31ecac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31ecacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31ecb0:
    // 0x31ecb0: 0x40f809  jalr        $v0
label_31ecb4:
    if (ctx->pc == 0x31ECB4u) {
        ctx->pc = 0x31ECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ECB0u;
        // 0x31ecb4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ECB8u;
        goto label_31ecb8;
    }
    ctx->pc = 0x31ECB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31ECB8u);
        ctx->pc = 0x31ECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ECB0u;
        // 0x31ecb4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31ECB0u, 0x31ECB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31ECB8u;
label_31ecb8:
    // 0x31ecb8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x31ecb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31ecbc:
    // 0x31ecbc: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x31ecbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_31ecc0:
    // 0x31ecc0: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_31ecc4:
    if (ctx->pc == 0x31ECC4u) {
        ctx->pc = 0x31ECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ECC0u;
        // 0x31ecc4: 0x96060402  lhu         $a2, 0x402($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1026)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ECC8u;
        goto label_31ecc8;
    }
    ctx->pc = 0x31ECC0u;
    {
        const bool branch_taken_0x31ecc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ecc0) {
            ctx->pc = 0x31ECC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31ECC0u;
            // 0x31ecc4: 0x96060402  lhu         $a2, 0x402($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1026)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31ED10u;
            goto label_31ed10;
        }
    }
    ctx->pc = 0x31ECC8u;
label_31ecc8:
    // 0x31ecc8: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x31ecc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_31eccc:
    // 0x31eccc: 0x0  nop
    ctx->pc = 0x31ecccu;
    // NOP
label_31ecd0:
    // 0x31ecd0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31ecd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31ecd4:
    // 0x31ecd4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x31ecd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_31ecd8:
    // 0x31ecd8: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x31ecd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_31ecdc:
    // 0x31ecdc: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x31ecdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_31ece0:
    // 0x31ece0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31ece0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31ece4:
    // 0x31ece4: 0x40f809  jalr        $v0
label_31ece8:
    if (ctx->pc == 0x31ECE8u) {
        ctx->pc = 0x31ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ECE4u;
        // 0x31ece8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ECECu;
        goto label_31ecec;
    }
    ctx->pc = 0x31ECE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31ECECu);
        ctx->pc = 0x31ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ECE4u;
        // 0x31ece8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31ECE4u, 0x31ECECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31ECECu;
label_31ecec:
    // 0x31ecec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31ececu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31ecf0:
    // 0x31ecf0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31ecf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31ecf4:
    // 0x31ecf4: 0xc0c7b66  jal         func_31ED98
label_31ecf8:
    if (ctx->pc == 0x31ECF8u) {
        ctx->pc = 0x31ECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ECF4u;
        // 0x31ecf8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ECFCu;
        goto label_31ecfc;
    }
    ctx->pc = 0x31ECF4u;
    SET_GPR_U32(ctx, 31, 0x31ECFCu);
    ctx->pc = 0x31ECF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ECF4u;
    // 0x31ecf8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED98u, 0x31ECF4u, 0x31ECFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ECFCu;
label_31ecfc:
    // 0x31ecfc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_31ed00:
    if (ctx->pc == 0x31ED00u) {
        ctx->pc = 0x31ED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ECFCu;
        // 0x31ed00: 0x253182b  sltu        $v1, $s2, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ED04u;
        goto label_31ed04;
    }
    ctx->pc = 0x31ECFCu;
    {
        const bool branch_taken_0x31ecfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ECFCu;
        // 0x31ed00: 0x253182b  sltu        $v1, $s2, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ecfc) {
            ctx->pc = 0x31ED44u;
            goto label_31ed44;
        }
    }
    ctx->pc = 0x31ED04u;
label_31ed04:
    // 0x31ed04: 0x5460fff2  bnel        $v1, $zero, . + 4 + (-0xE << 2)
label_31ed08:
    if (ctx->pc == 0x31ED08u) {
        ctx->pc = 0x31ED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ED04u;
        // 0x31ed08: 0x8e23002c  lw          $v1, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ED0Cu;
        goto label_31ed0c;
    }
    ctx->pc = 0x31ED04u;
    {
        const bool branch_taken_0x31ed04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ed04) {
            ctx->pc = 0x31ED08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31ED04u;
            // 0x31ed08: 0x8e23002c  lw          $v1, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31ECD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ecd0;
        }
    }
    ctx->pc = 0x31ED0Cu;
label_31ed0c:
    // 0x31ed0c: 0x96060402  lhu         $a2, 0x402($s0)
    ctx->pc = 0x31ed0cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1026)));
label_31ed10:
    // 0x31ed10: 0x30c3001f  andi        $v1, $a2, 0x1F
    ctx->pc = 0x31ed10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
label_31ed14:
    // 0x31ed14: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_31ed18:
    if (ctx->pc == 0x31ED18u) {
        ctx->pc = 0x31ED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ED14u;
        // 0x31ed18: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ED1Cu;
        goto label_31ed1c;
    }
    ctx->pc = 0x31ED14u;
    {
        const bool branch_taken_0x31ed14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ED14u;
        // 0x31ed18: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ed14) {
            ctx->pc = 0x31ED40u;
            goto label_31ed40;
        }
    }
    ctx->pc = 0x31ED1Cu;
label_31ed1c:
    // 0x31ed1c: 0x86050408  lh          $a1, 0x408($s0)
    ctx->pc = 0x31ed1cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1032)));
label_31ed20:
    // 0x31ed20: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x31ed20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_31ed24:
    // 0x31ed24: 0x96040408  lhu         $a0, 0x408($s0)
    ctx->pc = 0x31ed24u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1032)));
label_31ed28:
    // 0x31ed28: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x31ed28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_31ed2c:
    // 0x31ed2c: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x31ed2cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_31ed30:
    // 0x31ed30: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x31ed30u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_31ed34:
    // 0x31ed34: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x31ed34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_31ed38:
    // 0x31ed38: 0xa6040408  sh          $a0, 0x408($s0)
    ctx->pc = 0x31ed38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1032), (uint16_t)GPR_U32(ctx, 4));
label_31ed3c:
    // 0x31ed3c: 0xa6020402  sh          $v0, 0x402($s0)
    ctx->pc = 0x31ed3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1026), (uint16_t)GPR_U32(ctx, 2));
label_31ed40:
    // 0x31ed40: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x31ed40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_31ed44:
    // 0x31ed44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31ed44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31ed48:
    // 0x31ed48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31ed48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_31ed4c:
    // 0x31ed4c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x31ed4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31ed50:
    // 0x31ed50: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x31ed50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_31ed54:
    // 0x31ed54: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x31ed54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_31ed58:
    // 0x31ed58: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x31ed58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_31ed5c:
    // 0x31ed5c: 0x3e00008  jr          $ra
label_31ed60:
    if (ctx->pc == 0x31ED60u) {
        ctx->pc = 0x31ED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ED5Cu;
        // 0x31ed60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ED64u;
        goto label_31ed64;
    }
    ctx->pc = 0x31ED5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31ED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ED5Cu;
        // 0x31ed60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31ED5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31ED64u;
label_31ed64:
    // 0x31ed64: 0x0  nop
    ctx->pc = 0x31ed64u;
    // NOP
    ctx->pc = 0x31ed68u;
}
