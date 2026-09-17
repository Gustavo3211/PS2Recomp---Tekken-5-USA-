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

// Function: sub_00491BC8
// Address: 0x491bc8 - 0x491d68
void sub_00491BC8_0x491bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00491BC8_0x491bc8");
#endif

    switch (ctx->pc) {
        case 0x491bd8u: goto label_491bd8;
        case 0x491c90u: goto label_491c90;
        case 0x491ca4u: goto label_491ca4;
        default: break;
    }

    ctx->pc = 0x491bc8u;

    // 0x491bc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x491bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x491bcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x491bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x491bd0: 0xc124620  jal         func_491880
    ctx->pc = 0x491BD0u;
    SET_GPR_U32(ctx, 31, 0x491BD8u);
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x491BD0u, 0x491BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491BD8u;
label_491bd8:
    // 0x491bd8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x491bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x491bdc: 0x2466d680  addiu       $a2, $v1, -0x2980
    ctx->pc = 0x491bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x491be0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x491be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x491be4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x491be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x491be8: 0x8463e804  lh          $v1, -0x17FC($v1)
    ctx->pc = 0x491be8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961156)));
    // 0x491bec: 0x24c80058  addiu       $t0, $a2, 0x58
    ctx->pc = 0x491becu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 88));
    // 0x491bf0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x491BF0u;
    {
        const bool branch_taken_0x491bf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x491BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491BF0u;
        // 0x491bf4: 0x24c7005c  addiu       $a3, $a2, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491bf0) {
            ctx->pc = 0x491C08u;
            goto label_491c08;
        }
    }
    ctx->pc = 0x491BF8u;
    // 0x491bf8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x491bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x491bfc: 0x8443fd06  lh          $v1, -0x2FA($v0)
    ctx->pc = 0x491bfcu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x7EFD06u));
    // 0x491c00: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x491C00u;
    {
        const bool branch_taken_0x491c00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x491C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491C00u;
        // 0x491c04: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491c00) {
            ctx->pc = 0x491C84u;
            goto label_491c84;
        }
    }
    ctx->pc = 0x491C08u;
label_491c08:
    // 0x491c08: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x491c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x491c0c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x491c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x491c10: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x491c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x491c14: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x491c14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x491c18: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x491c18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x491c1c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x491c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x491c20: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x491c20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x491c24: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x491c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x491c28: 0x94c3000e  lhu         $v1, 0xE($a2)
    ctx->pc = 0x491c28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x491c2c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491c30: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491c34: 0x94c30010  lhu         $v1, 0x10($a2)
    ctx->pc = 0x491c34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x491c38: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491c38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491c3c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491c40: 0x94c30012  lhu         $v1, 0x12($a2)
    ctx->pc = 0x491c40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x491c44: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491c44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491c48: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491c4c: 0x94c30014  lhu         $v1, 0x14($a2)
    ctx->pc = 0x491c4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x491c50: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491c50u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491c54: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491c58: 0x94c30016  lhu         $v1, 0x16($a2)
    ctx->pc = 0x491c58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 22)));
    // 0x491c5c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491c60: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491c64: 0x94c30018  lhu         $v1, 0x18($a2)
    ctx->pc = 0x491c64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x491c68: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491c68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491c6c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491c70: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x491c70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x491c74: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x491c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x491c78: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x491c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x491c7c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x491c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x491c80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x491c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_491c84:
    // 0x491c84: 0x3e00008  jr          $ra
    ctx->pc = 0x491C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x491C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491C84u;
        // 0x491c88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x491C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x491C8Cu;
    // 0x491c8c: 0x0  nop
    ctx->pc = 0x491c8cu;
    // NOP
label_491c90:
    // 0x491c90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x491c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x491c94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x491c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x491c98: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x491c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x491c9c: 0xc124620  jal         func_491880
    ctx->pc = 0x491C9Cu;
    SET_GPR_U32(ctx, 31, 0x491CA4u);
    ctx->pc = 0x491CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x491C9Cu;
    // 0x491ca0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x491C9Cu, 0x491CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491CA4u;
label_491ca4:
    // 0x491ca4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x491ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x491ca8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x491ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x491cac: 0x8484e804  lh          $a0, -0x17FC($a0)
    ctx->pc = 0x491cacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294961156)));
    // 0x491cb0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x491cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x491cb4: 0x2465d680  addiu       $a1, $v1, -0x2980
    ctx->pc = 0x491cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x491cb8: 0x24a6005c  addiu       $a2, $a1, 0x5C
    ctx->pc = 0x491cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
    // 0x491cbc: 0x24a80080  addiu       $t0, $a1, 0x80
    ctx->pc = 0x491cbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x491cc0: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x491CC0u;
    {
        const bool branch_taken_0x491cc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x491CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491CC0u;
        // 0x491cc4: 0x24a70082  addiu       $a3, $a1, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491cc0) {
            ctx->pc = 0x491CD8u;
            goto label_491cd8;
        }
    }
    ctx->pc = 0x491CC8u;
    // 0x491cc8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x491cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x491ccc: 0x8443fd06  lh          $v1, -0x2FA($v0)
    ctx->pc = 0x491cccu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x7EFD06u));
    // 0x491cd0: 0x54600022  bnel        $v1, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x491CD0u;
    {
        const bool branch_taken_0x491cd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x491cd0) {
            ctx->pc = 0x491CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x491CD0u;
            // 0x491cd4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x491D5Cu;
            goto label_491d5c;
        }
    }
    ctx->pc = 0x491CD8u;
label_491cd8:
    // 0x491cd8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x491cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x491cdc: 0x94a322ca  lhu         $v1, 0x22CA($a1)
    ctx->pc = 0x491cdcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8906)));
    // 0x491ce0: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491ce4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491ce8: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x491ce8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x491cec: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491cecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491cf0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491cf4: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x491cf4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x491cf8: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491cfc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491d00: 0x96030016  lhu         $v1, 0x16($s0)
    ctx->pc = 0x491d00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x491d04: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491d04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491d08: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491d0c: 0x9603001a  lhu         $v1, 0x1A($s0)
    ctx->pc = 0x491d0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x491d10: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491d10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491d14: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491d18: 0x96030032  lhu         $v1, 0x32($s0)
    ctx->pc = 0x491d18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x491d1c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491d20: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491d24: 0x96030034  lhu         $v1, 0x34($s0)
    ctx->pc = 0x491d24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x491d28: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491d28u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491d2c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491d30: 0x96030036  lhu         $v1, 0x36($s0)
    ctx->pc = 0x491d30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x491d34: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491d34u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491d38: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491d3c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x491d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x491d40: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x491d40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x491d44: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x491d44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x491d48: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x491d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x491d4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x491d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x491d50: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x491d50u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491d54: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x491d54u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x491d58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x491d58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_491d5c:
    // 0x491d5c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x491d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x491d60: 0x3e00008  jr          $ra
    ctx->pc = 0x491D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x491D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491D60u;
        // 0x491d64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x491D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x491D68u;
}
