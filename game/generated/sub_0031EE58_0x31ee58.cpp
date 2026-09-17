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

// Function: sub_0031EE58
// Address: 0x31ee58 - 0x31f010
void sub_0031EE58_0x31ee58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031EE58_0x31ee58");
#endif

    switch (ctx->pc) {
        case 0x31ee58u: goto label_31ee58;
        case 0x31ee5cu: goto label_31ee5c;
        case 0x31ee60u: goto label_31ee60;
        case 0x31ee64u: goto label_31ee64;
        case 0x31ee68u: goto label_31ee68;
        case 0x31ee6cu: goto label_31ee6c;
        case 0x31ee70u: goto label_31ee70;
        case 0x31ee74u: goto label_31ee74;
        case 0x31ee78u: goto label_31ee78;
        case 0x31ee7cu: goto label_31ee7c;
        case 0x31ee80u: goto label_31ee80;
        case 0x31ee84u: goto label_31ee84;
        case 0x31ee88u: goto label_31ee88;
        case 0x31ee8cu: goto label_31ee8c;
        case 0x31ee90u: goto label_31ee90;
        case 0x31ee94u: goto label_31ee94;
        case 0x31ee98u: goto label_31ee98;
        case 0x31ee9cu: goto label_31ee9c;
        case 0x31eea0u: goto label_31eea0;
        case 0x31eea4u: goto label_31eea4;
        case 0x31eea8u: goto label_31eea8;
        case 0x31eeacu: goto label_31eeac;
        case 0x31eeb0u: goto label_31eeb0;
        case 0x31eeb4u: goto label_31eeb4;
        case 0x31eeb8u: goto label_31eeb8;
        case 0x31eebcu: goto label_31eebc;
        case 0x31eec0u: goto label_31eec0;
        case 0x31eec4u: goto label_31eec4;
        case 0x31eec8u: goto label_31eec8;
        case 0x31eeccu: goto label_31eecc;
        case 0x31eed0u: goto label_31eed0;
        case 0x31eed4u: goto label_31eed4;
        case 0x31eed8u: goto label_31eed8;
        case 0x31eedcu: goto label_31eedc;
        case 0x31eee0u: goto label_31eee0;
        case 0x31eee4u: goto label_31eee4;
        case 0x31eee8u: goto label_31eee8;
        case 0x31eeecu: goto label_31eeec;
        case 0x31eef0u: goto label_31eef0;
        case 0x31eef4u: goto label_31eef4;
        case 0x31eef8u: goto label_31eef8;
        case 0x31eefcu: goto label_31eefc;
        case 0x31ef00u: goto label_31ef00;
        case 0x31ef04u: goto label_31ef04;
        case 0x31ef08u: goto label_31ef08;
        case 0x31ef0cu: goto label_31ef0c;
        case 0x31ef10u: goto label_31ef10;
        case 0x31ef14u: goto label_31ef14;
        case 0x31ef18u: goto label_31ef18;
        case 0x31ef1cu: goto label_31ef1c;
        case 0x31ef20u: goto label_31ef20;
        case 0x31ef24u: goto label_31ef24;
        case 0x31ef28u: goto label_31ef28;
        case 0x31ef2cu: goto label_31ef2c;
        case 0x31ef30u: goto label_31ef30;
        case 0x31ef34u: goto label_31ef34;
        case 0x31ef38u: goto label_31ef38;
        case 0x31ef3cu: goto label_31ef3c;
        case 0x31ef40u: goto label_31ef40;
        case 0x31ef44u: goto label_31ef44;
        case 0x31ef48u: goto label_31ef48;
        case 0x31ef4cu: goto label_31ef4c;
        case 0x31ef50u: goto label_31ef50;
        case 0x31ef54u: goto label_31ef54;
        case 0x31ef58u: goto label_31ef58;
        case 0x31ef5cu: goto label_31ef5c;
        case 0x31ef60u: goto label_31ef60;
        case 0x31ef64u: goto label_31ef64;
        case 0x31ef68u: goto label_31ef68;
        case 0x31ef6cu: goto label_31ef6c;
        case 0x31ef70u: goto label_31ef70;
        case 0x31ef74u: goto label_31ef74;
        case 0x31ef78u: goto label_31ef78;
        case 0x31ef7cu: goto label_31ef7c;
        case 0x31ef80u: goto label_31ef80;
        case 0x31ef84u: goto label_31ef84;
        case 0x31ef88u: goto label_31ef88;
        case 0x31ef8cu: goto label_31ef8c;
        case 0x31ef90u: goto label_31ef90;
        case 0x31ef94u: goto label_31ef94;
        case 0x31ef98u: goto label_31ef98;
        case 0x31ef9cu: goto label_31ef9c;
        case 0x31efa0u: goto label_31efa0;
        case 0x31efa4u: goto label_31efa4;
        case 0x31efa8u: goto label_31efa8;
        case 0x31efacu: goto label_31efac;
        case 0x31efb0u: goto label_31efb0;
        case 0x31efb4u: goto label_31efb4;
        case 0x31efb8u: goto label_31efb8;
        case 0x31efbcu: goto label_31efbc;
        case 0x31efc0u: goto label_31efc0;
        case 0x31efc4u: goto label_31efc4;
        case 0x31efc8u: goto label_31efc8;
        case 0x31efccu: goto label_31efcc;
        case 0x31efd0u: goto label_31efd0;
        case 0x31efd4u: goto label_31efd4;
        case 0x31efd8u: goto label_31efd8;
        case 0x31efdcu: goto label_31efdc;
        case 0x31efe0u: goto label_31efe0;
        case 0x31efe4u: goto label_31efe4;
        case 0x31efe8u: goto label_31efe8;
        case 0x31efecu: goto label_31efec;
        case 0x31eff0u: goto label_31eff0;
        case 0x31eff4u: goto label_31eff4;
        case 0x31eff8u: goto label_31eff8;
        case 0x31effcu: goto label_31effc;
        case 0x31f000u: goto label_31f000;
        case 0x31f004u: goto label_31f004;
        case 0x31f008u: goto label_31f008;
        case 0x31f00cu: goto label_31f00c;
        default: break;
    }

    ctx->pc = 0x31ee58u;

label_31ee58:
    // 0x31ee58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31ee58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_31ee5c:
    // 0x31ee5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31ee5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_31ee60:
    // 0x31ee60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31ee60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31ee64:
    // 0x31ee64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x31ee64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_31ee68:
    // 0x31ee68: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x31ee68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31ee6c:
    // 0x31ee6c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x31ee6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_31ee70:
    // 0x31ee70: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x31ee70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_31ee74:
    // 0x31ee74: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x31ee74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_31ee78:
    // 0x31ee78: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x31ee78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_31ee7c:
    // 0x31ee7c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x31ee7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_31ee80:
    // 0x31ee80: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x31ee80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_31ee84:
    // 0x31ee84: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x31ee84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_31ee88:
    // 0x31ee88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31ee88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_31ee8c:
    // 0x31ee8c: 0x2693000c  addiu       $s3, $s4, 0xC
    ctx->pc = 0x31ee8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_31ee90:
    // 0x31ee90: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x31ee90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_31ee94:
    // 0x31ee94: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x31ee94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_31ee98:
    // 0x31ee98: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x31ee98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_31ee9c:
    // 0x31ee9c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x31ee9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_31eea0:
    // 0x31eea0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31eea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31eea4:
    // 0x31eea4: 0x40f809  jalr        $v0
label_31eea8:
    if (ctx->pc == 0x31EEA8u) {
        ctx->pc = 0x31EEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EEA4u;
        // 0x31eea8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EEACu;
        goto label_31eeac;
    }
    ctx->pc = 0x31EEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31EEACu);
        ctx->pc = 0x31EEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EEA4u;
        // 0x31eea8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EEA4u, 0x31EEACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31EEACu;
label_31eeac:
    // 0x31eeac: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_31eeb0:
    if (ctx->pc == 0x31EEB0u) {
        ctx->pc = 0x31EEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EEACu;
        // 0x31eeb0: 0x96620012  lhu         $v0, 0x12($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EEB4u;
        goto label_31eeb4;
    }
    ctx->pc = 0x31EEACu;
    {
        const bool branch_taken_0x31eeac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31eeac) {
            ctx->pc = 0x31EEB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31EEACu;
            // 0x31eeb0: 0x96620012  lhu         $v0, 0x12($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31EEC0u;
            goto label_31eec0;
        }
    }
    ctx->pc = 0x31EEB4u;
label_31eeb4:
    // 0x31eeb4: 0x10000021  b           . + 4 + (0x21 << 2)
label_31eeb8:
    if (ctx->pc == 0x31EEB8u) {
        ctx->pc = 0x31EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EEB4u;
        // 0x31eeb8: 0x96700014  lhu         $s0, 0x14($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EEBCu;
        goto label_31eebc;
    }
    ctx->pc = 0x31EEB4u;
    {
        const bool branch_taken_0x31eeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EEB4u;
        // 0x31eeb8: 0x96700014  lhu         $s0, 0x14($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eeb4) {
            ctx->pc = 0x31EF3Cu;
            goto label_31ef3c;
        }
    }
    ctx->pc = 0x31EEBCu;
label_31eebc:
    // 0x31eebc: 0x0  nop
    ctx->pc = 0x31eebcu;
    // NOP
label_31eec0:
    // 0x31eec0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_31eec4:
    if (ctx->pc == 0x31EEC4u) {
        ctx->pc = 0x31EEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EEC0u;
        // 0x31eec4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EEC8u;
        goto label_31eec8;
    }
    ctx->pc = 0x31EEC0u;
    {
        const bool branch_taken_0x31eec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EEC0u;
        // 0x31eec4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eec0) {
            ctx->pc = 0x31EED8u;
            goto label_31eed8;
        }
    }
    ctx->pc = 0x31EEC8u;
label_31eec8:
    // 0x31eec8: 0xfec00000  sd          $zero, 0x0($s6)
    ctx->pc = 0x31eec8u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 0));
label_31eecc:
    // 0x31eecc: 0x10000045  b           . + 4 + (0x45 << 2)
label_31eed0:
    if (ctx->pc == 0x31EED0u) {
        ctx->pc = 0x31EED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EECCu;
        // 0x31eed0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EED4u;
        goto label_31eed4;
    }
    ctx->pc = 0x31EECCu;
    {
        const bool branch_taken_0x31eecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EECCu;
        // 0x31eed0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eecc) {
            ctx->pc = 0x31EFE4u;
            goto label_31efe4;
        }
    }
    ctx->pc = 0x31EED4u;
label_31eed4:
    // 0x31eed4: 0x0  nop
    ctx->pc = 0x31eed4u;
    // NOP
label_31eed8:
    // 0x31eed8: 0xc0c7b10  jal         func_31EC40
label_31eedc:
    if (ctx->pc == 0x31EEDCu) {
        ctx->pc = 0x31EEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EED8u;
        // 0x31eedc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EEE0u;
        goto label_31eee0;
    }
    ctx->pc = 0x31EED8u;
    SET_GPR_U32(ctx, 31, 0x31EEE0u);
    ctx->pc = 0x31EEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EED8u;
    // 0x31eedc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EC40u, 0x31EED8u, 0x31EEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EEE0u;
label_31eee0:
    // 0x31eee0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31eee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31eee4:
    // 0x31eee4: 0x56000016  bnel        $s0, $zero, . + 4 + (0x16 << 2)
label_31eee8:
    if (ctx->pc == 0x31EEE8u) {
        ctx->pc = 0x31EEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EEE4u;
        // 0x31eee8: 0x96a2001e  lhu         $v0, 0x1E($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EEECu;
        goto label_31eeec;
    }
    ctx->pc = 0x31EEE4u;
    {
        const bool branch_taken_0x31eee4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x31eee4) {
            ctx->pc = 0x31EEE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31EEE4u;
            // 0x31eee8: 0x96a2001e  lhu         $v0, 0x1E($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 30)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31EF40u;
            goto label_31ef40;
        }
    }
    ctx->pc = 0x31EEECu;
label_31eeec:
    // 0x31eeec: 0x96630012  lhu         $v1, 0x12($s3)
    ctx->pc = 0x31eeecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
label_31eef0:
    // 0x31eef0: 0x96220410  lhu         $v0, 0x410($s1)
    ctx->pc = 0x31eef0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1040)));
label_31eef4:
    // 0x31eef4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x31eef4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_31eef8:
    // 0x31eef8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_31eefc:
    if (ctx->pc == 0x31EEFCu) {
        ctx->pc = 0x31EEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EEF8u;
        // 0x31eefc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EF00u;
        goto label_31ef00;
    }
    ctx->pc = 0x31EEF8u;
    {
        const bool branch_taken_0x31eef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EEF8u;
        // 0x31eefc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eef8) {
            ctx->pc = 0x31EF20u;
            goto label_31ef20;
        }
    }
    ctx->pc = 0x31EF00u;
label_31ef00:
    // 0x31ef00: 0xc0c7cca  jal         func_31F328
label_31ef04:
    if (ctx->pc == 0x31EF04u) {
        ctx->pc = 0x31EF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF00u;
        // 0x31ef04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EF08u;
        goto label_31ef08;
    }
    ctx->pc = 0x31EF00u;
    SET_GPR_U32(ctx, 31, 0x31EF08u);
    ctx->pc = 0x31EF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EF00u;
    // 0x31ef04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F328u, 0x31EF00u, 0x31EF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EF08u;
label_31ef08:
    // 0x31ef08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31ef08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31ef0c:
    // 0x31ef0c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x31ef0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_31ef10:
    // 0x31ef10: 0xc0c7b10  jal         func_31EC40
label_31ef14:
    if (ctx->pc == 0x31EF14u) {
        ctx->pc = 0x31EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF10u;
        // 0x31ef14: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EF18u;
        goto label_31ef18;
    }
    ctx->pc = 0x31EF10u;
    SET_GPR_U32(ctx, 31, 0x31EF18u);
    ctx->pc = 0x31EF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EF10u;
    // 0x31ef14: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EC40u, 0x31EF10u, 0x31EF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EF18u;
label_31ef18:
    // 0x31ef18: 0x10000008  b           . + 4 + (0x8 << 2)
label_31ef1c:
    if (ctx->pc == 0x31EF1Cu) {
        ctx->pc = 0x31EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF18u;
        // 0x31ef1c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EF20u;
        goto label_31ef20;
    }
    ctx->pc = 0x31EF18u;
    {
        const bool branch_taken_0x31ef18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF18u;
        // 0x31ef1c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ef18) {
            ctx->pc = 0x31EF3Cu;
            goto label_31ef3c;
        }
    }
    ctx->pc = 0x31EF20u;
label_31ef20:
    // 0x31ef20: 0xc0c7c30  jal         func_31F0C0
label_31ef24:
    if (ctx->pc == 0x31EF24u) {
        ctx->pc = 0x31EF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF20u;
        // 0x31ef24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EF28u;
        goto label_31ef28;
    }
    ctx->pc = 0x31EF20u;
    SET_GPR_U32(ctx, 31, 0x31EF28u);
    ctx->pc = 0x31EF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EF20u;
    // 0x31ef24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F0C0u, 0x31EF20u, 0x31EF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EF28u;
label_31ef28:
    // 0x31ef28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31ef28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31ef2c:
    // 0x31ef2c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x31ef2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_31ef30:
    // 0x31ef30: 0xc0c7b10  jal         func_31EC40
label_31ef34:
    if (ctx->pc == 0x31EF34u) {
        ctx->pc = 0x31EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF30u;
        // 0x31ef34: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EF38u;
        goto label_31ef38;
    }
    ctx->pc = 0x31EF30u;
    SET_GPR_U32(ctx, 31, 0x31EF38u);
    ctx->pc = 0x31EF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EF30u;
    // 0x31ef34: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EC40u, 0x31EF30u, 0x31EF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EF38u;
label_31ef38:
    // 0x31ef38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31ef38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31ef3c:
    // 0x31ef3c: 0x96a2001e  lhu         $v0, 0x1E($s5)
    ctx->pc = 0x31ef3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 30)));
label_31ef40:
    // 0x31ef40: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_31ef44:
    if (ctx->pc == 0x31EF44u) {
        ctx->pc = 0x31EF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF40u;
        // 0x31ef44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EF48u;
        goto label_31ef48;
    }
    ctx->pc = 0x31EF40u;
    {
        const bool branch_taken_0x31ef40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF40u;
        // 0x31ef44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ef40) {
            ctx->pc = 0x31EF58u;
            goto label_31ef58;
        }
    }
    ctx->pc = 0x31EF48u;
label_31ef48:
    // 0x31ef48: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x31ef48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_31ef4c:
    // 0x31ef4c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x31ef4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31ef50:
    // 0x31ef50: 0x10000023  b           . + 4 + (0x23 << 2)
label_31ef54:
    if (ctx->pc == 0x31EF54u) {
        ctx->pc = 0x31EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF50u;
        // 0x31ef54: 0x3183e  dsrl32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EF58u;
        goto label_31ef58;
    }
    ctx->pc = 0x31EF50u;
    {
        const bool branch_taken_0x31ef50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF50u;
        // 0x31ef54: 0x3183e  dsrl32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ef50) {
            ctx->pc = 0x31EFE0u;
            goto label_31efe0;
        }
    }
    ctx->pc = 0x31EF58u;
label_31ef58:
    // 0x31ef58: 0xc0c7b5a  jal         func_31ED68
label_31ef5c:
    if (ctx->pc == 0x31EF5Cu) {
        ctx->pc = 0x31EF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF58u;
        // 0x31ef5c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EF60u;
        goto label_31ef60;
    }
    ctx->pc = 0x31EF58u;
    SET_GPR_U32(ctx, 31, 0x31EF60u);
    ctx->pc = 0x31EF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EF58u;
    // 0x31ef5c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED68u, 0x31EF58u, 0x31EF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EF60u;
label_31ef60:
    // 0x31ef60: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_31ef64:
    if (ctx->pc == 0x31EF64u) {
        ctx->pc = 0x31EF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF60u;
        // 0x31ef64: 0x10183c  dsll32      $v1, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EF68u;
        goto label_31ef68;
    }
    ctx->pc = 0x31EF60u;
    {
        const bool branch_taken_0x31ef60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF60u;
        // 0x31ef64: 0x10183c  dsll32      $v1, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ef60) {
            ctx->pc = 0x31EFD0u;
            goto label_31efd0;
        }
    }
    ctx->pc = 0x31EF68u;
label_31ef68:
    // 0x31ef68: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x31ef68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_31ef6c:
    // 0x31ef6c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x31ef6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_31ef70:
    // 0x31ef70: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x31ef70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_31ef74:
    // 0x31ef74: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31ef78:
    // 0x31ef78: 0x40f809  jalr        $v0
label_31ef7c:
    if (ctx->pc == 0x31EF7Cu) {
        ctx->pc = 0x31EF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF78u;
        // 0x31ef7c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EF80u;
        goto label_31ef80;
    }
    ctx->pc = 0x31EF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31EF80u);
        ctx->pc = 0x31EF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF78u;
        // 0x31ef7c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EF78u, 0x31EF80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31EF80u;
label_31ef80:
    // 0x31ef80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_31ef84:
    if (ctx->pc == 0x31EF84u) {
        ctx->pc = 0x31EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF80u;
        // 0x31ef84: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EF88u;
        goto label_31ef88;
    }
    ctx->pc = 0x31EF80u;
    {
        const bool branch_taken_0x31ef80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF80u;
        // 0x31ef84: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ef80) {
            ctx->pc = 0x31EF98u;
            goto label_31ef98;
        }
    }
    ctx->pc = 0x31EF88u;
label_31ef88:
    // 0x31ef88: 0xc0c7c30  jal         func_31F0C0
label_31ef8c:
    if (ctx->pc == 0x31EF8Cu) {
        ctx->pc = 0x31EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF88u;
        // 0x31ef8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EF90u;
        goto label_31ef90;
    }
    ctx->pc = 0x31EF88u;
    SET_GPR_U32(ctx, 31, 0x31EF90u);
    ctx->pc = 0x31EF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EF88u;
    // 0x31ef8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F0C0u, 0x31EF88u, 0x31EF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EF90u;
label_31ef90:
    // 0x31ef90: 0x1000000b  b           . + 4 + (0xB << 2)
label_31ef94:
    if (ctx->pc == 0x31EF94u) {
        ctx->pc = 0x31EF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF90u;
        // 0x31ef94: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EF98u;
        goto label_31ef98;
    }
    ctx->pc = 0x31EF90u;
    {
        const bool branch_taken_0x31ef90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF90u;
        // 0x31ef94: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ef90) {
            ctx->pc = 0x31EFC0u;
            goto label_31efc0;
        }
    }
    ctx->pc = 0x31EF98u;
label_31ef98:
    // 0x31ef98: 0xc0c7c04  jal         func_31F010
label_31ef9c:
    if (ctx->pc == 0x31EF9Cu) {
        ctx->pc = 0x31EF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF98u;
        // 0x31ef9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EFA0u;
        goto label_31efa0;
    }
    ctx->pc = 0x31EF98u;
    SET_GPR_U32(ctx, 31, 0x31EFA0u);
    ctx->pc = 0x31EF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EF98u;
    // 0x31ef9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F010u, 0x31EF98u, 0x31EFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EFA0u;
label_31efa0:
    // 0x31efa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31efa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31efa4:
    // 0x31efa4: 0xc0c7c30  jal         func_31F0C0
label_31efa8:
    if (ctx->pc == 0x31EFA8u) {
        ctx->pc = 0x31EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EFA4u;
        // 0x31efa8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EFACu;
        goto label_31efac;
    }
    ctx->pc = 0x31EFA4u;
    SET_GPR_U32(ctx, 31, 0x31EFACu);
    ctx->pc = 0x31EFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EFA4u;
    // 0x31efa8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F0C0u, 0x31EFA4u, 0x31EFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EFACu;
label_31efac:
    // 0x31efac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31efacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31efb0:
    // 0x31efb0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x31efb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_31efb4:
    // 0x31efb4: 0xc0c7b10  jal         func_31EC40
label_31efb8:
    if (ctx->pc == 0x31EFB8u) {
        ctx->pc = 0x31EFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EFB4u;
        // 0x31efb8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EFBCu;
        goto label_31efbc;
    }
    ctx->pc = 0x31EFB4u;
    SET_GPR_U32(ctx, 31, 0x31EFBCu);
    ctx->pc = 0x31EFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EFB4u;
    // 0x31efb8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EC40u, 0x31EFB4u, 0x31EFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EFBCu;
label_31efbc:
    // 0x31efbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31efbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31efc0:
    // 0x31efc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31efc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31efc4:
    // 0x31efc4: 0xc0c7b5a  jal         func_31ED68
label_31efc8:
    if (ctx->pc == 0x31EFC8u) {
        ctx->pc = 0x31EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EFC4u;
        // 0x31efc8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EFCCu;
        goto label_31efcc;
    }
    ctx->pc = 0x31EFC4u;
    SET_GPR_U32(ctx, 31, 0x31EFCCu);
    ctx->pc = 0x31EFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EFC4u;
    // 0x31efc8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED68u, 0x31EFC4u, 0x31EFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EFCCu;
label_31efcc:
    // 0x31efcc: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x31efccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_31efd0:
    // 0x31efd0: 0x2217c  dsll32      $a0, $v0, 5
    ctx->pc = 0x31efd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 5));
label_31efd4:
    // 0x31efd4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31efd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_31efd8:
    // 0x31efd8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x31efd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31efdc:
    // 0x31efdc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x31efdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_31efe0:
    // 0x31efe0: 0xfec30000  sd          $v1, 0x0($s6)
    ctx->pc = 0x31efe0u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 3));
label_31efe4:
    // 0x31efe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31efe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31efe8:
    // 0x31efe8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31efe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_31efec:
    // 0x31efec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x31efecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31eff0:
    // 0x31eff0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x31eff0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_31eff4:
    // 0x31eff4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x31eff4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_31eff8:
    // 0x31eff8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x31eff8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_31effc:
    // 0x31effc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x31effcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_31f000:
    // 0x31f000: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x31f000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_31f004:
    // 0x31f004: 0x3e00008  jr          $ra
label_31f008:
    if (ctx->pc == 0x31F008u) {
        ctx->pc = 0x31F008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F004u;
        // 0x31f008: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F00Cu;
        goto label_31f00c;
    }
    ctx->pc = 0x31F004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F004u;
        // 0x31f008: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F00Cu;
label_31f00c:
    // 0x31f00c: 0x0  nop
    ctx->pc = 0x31f00cu;
    // NOP
    ctx->pc = 0x31f010u;
}
