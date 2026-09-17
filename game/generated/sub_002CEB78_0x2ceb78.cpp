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

// Function: sub_002CEB78
// Address: 0x2ceb78 - 0x2cec70
void sub_002CEB78_0x2ceb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CEB78_0x2ceb78");
#endif

    switch (ctx->pc) {
        case 0x2ceb90u: goto label_2ceb90;
        case 0x2cebb4u: goto label_2cebb4;
        case 0x2cebdcu: goto label_2cebdc;
        case 0x2cec00u: goto label_2cec00;
        case 0x2cec58u: goto label_2cec58;
        default: break;
    }

    ctx->pc = 0x2ceb78u;

    // 0x2ceb78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ceb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ceb7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ceb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ceb80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ceb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ceb84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ceb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ceb88: 0xc08e6d2  jal         func_239B48
    ctx->pc = 0x2CEB88u;
    SET_GPR_U32(ctx, 31, 0x2CEB90u);
    ctx->pc = 0x2CEB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEB88u;
    // 0x2ceb8c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239B48u, 0x2CEB88u, 0x2CEB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEB90u;
label_2ceb90:
    // 0x2ceb90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ceb90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ceb94: 0x32228000  andi        $v0, $s1, 0x8000
    ctx->pc = 0x2ceb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32768);
    // 0x2ceb98: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CEB98u;
    {
        const bool branch_taken_0x2ceb98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEB98u;
        // 0x2ceb9c: 0x32222000  andi        $v0, $s1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceb98) {
            ctx->pc = 0x2CEBC0u;
            goto label_2cebc0;
        }
    }
    ctx->pc = 0x2CEBA0u;
    // 0x2ceba0: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x2ceba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2ceba4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CEBA4u;
    {
        const bool branch_taken_0x2ceba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ceba4) {
            ctx->pc = 0x2CEBA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEBA4u;
            // 0x2ceba8: 0x32222000  andi        $v0, $s1, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEBC0u;
            goto label_2cebc0;
        }
    }
    ctx->pc = 0x2CEBACu;
    // 0x2cebac: 0xc092940  jal         func_24A500
    ctx->pc = 0x2CEBACu;
    SET_GPR_U32(ctx, 31, 0x2CEBB4u);
    ctx->pc = 0x2CEBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEBACu;
    // 0x2cebb0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2CEBACu, 0x2CEBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEBB4u;
label_2cebb4:
    // 0x2cebb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cebb8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2CEBB8u;
    {
        const bool branch_taken_0x2cebb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEBB8u;
        // 0x2cebbc: 0xae020090  sw          $v0, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cebb8) {
            ctx->pc = 0x2CEBE0u;
            goto label_2cebe0;
        }
    }
    ctx->pc = 0x2CEBC0u;
label_2cebc0:
    // 0x2cebc0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CEBC0u;
    {
        const bool branch_taken_0x2cebc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEBC0u;
        // 0x2cebc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cebc0) {
            ctx->pc = 0x2CEBE0u;
            goto label_2cebe0;
        }
    }
    ctx->pc = 0x2CEBC8u;
    // 0x2cebc8: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x2cebc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2cebcc: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CEBCCu;
    {
        const bool branch_taken_0x2cebcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cebcc) {
            ctx->pc = 0x2CEBD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEBCCu;
            // 0x2cebd0: 0x32220060  andi        $v0, $s1, 0x60 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)96);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEBE4u;
            goto label_2cebe4;
        }
    }
    ctx->pc = 0x2CEBD4u;
    // 0x2cebd4: 0xc092940  jal         func_24A500
    ctx->pc = 0x2CEBD4u;
    SET_GPR_U32(ctx, 31, 0x2CEBDCu);
    ctx->pc = 0x2CEBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEBD4u;
    // 0x2cebd8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2CEBD4u, 0x2CEBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEBDCu;
label_2cebdc:
    // 0x2cebdc: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x2cebdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_2cebe0:
    // 0x2cebe0: 0x32220060  andi        $v0, $s1, 0x60
    ctx->pc = 0x2cebe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)96);
label_2cebe4:
    // 0x2cebe4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2CEBE4u;
    {
        const bool branch_taken_0x2cebe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEBE4u;
        // 0x2cebe8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cebe4) {
            ctx->pc = 0x2CEC40u;
            goto label_2cec40;
        }
    }
    ctx->pc = 0x2CEBECu;
    // 0x2cebec: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x2cebecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2cebf0: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CEBF0u;
    {
        const bool branch_taken_0x2cebf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cebf0) {
            ctx->pc = 0x2CEBF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEBF0u;
            // 0x2cebf4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEC20u;
            goto label_2cec20;
        }
    }
    ctx->pc = 0x2CEBF8u;
    // 0x2cebf8: 0xc0b273a  jal         func_2C9CE8
    ctx->pc = 0x2CEBF8u;
    SET_GPR_U32(ctx, 31, 0x2CEC00u);
    ctx->pc = 0x2CEBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEBF8u;
    // 0x2cebfc: 0x2604005c  addiu       $a0, $s0, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9CE8u, 0x2CEBF8u, 0x2CEC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEC00u;
label_2cec00:
    // 0x2cec00: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2cec00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2cec04: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2cec04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x2cec08: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2cec08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2cec0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cec0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cec10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cec10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cec14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cec14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cec18: 0x8092940  j           func_24A500
    ctx->pc = 0x2CEC18u;
    ctx->pc = 0x2CEC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEC18u;
    // 0x2cec1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    sub_0024A500_0x24a500(rdram, ctx, runtime); return;
    ctx->pc = 0x2CEC20u;
label_2cec20:
    // 0x2cec20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cec20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cec24: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2cec24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x2cec28: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2cec28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cec2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cec2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cec30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cec30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cec34: 0x8092940  j           func_24A500
    ctx->pc = 0x2CEC34u;
    ctx->pc = 0x2CEC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEC34u;
    // 0x2cec38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    sub_0024A500_0x24a500(rdram, ctx, runtime); return;
    ctx->pc = 0x2CEC3Cu;
    // 0x2cec3c: 0x0  nop
    ctx->pc = 0x2cec3cu;
    // NOP
label_2cec40:
    // 0x2cec40: 0x32220090  andi        $v0, $s1, 0x90
    ctx->pc = 0x2cec40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)144);
    // 0x2cec44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CEC44u;
    {
        const bool branch_taken_0x2cec44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC44u;
        // 0x2cec48: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cec44) {
            ctx->pc = 0x2CEC58u;
            goto label_2cec58;
        }
    }
    ctx->pc = 0x2CEC4Cu;
    // 0x2cec4c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2cec4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cec50: 0xc092940  jal         func_24A500
    ctx->pc = 0x2CEC50u;
    SET_GPR_U32(ctx, 31, 0x2CEC58u);
    ctx->pc = 0x2CEC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEC50u;
    // 0x2cec54: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2CEC50u, 0x2CEC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEC58u;
label_2cec58:
    // 0x2cec58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cec58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cec5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cec5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cec60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cec60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cec64: 0x3e00008  jr          $ra
    ctx->pc = 0x2CEC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CEC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC64u;
        // 0x2cec68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CEC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CEC6Cu;
    // 0x2cec6c: 0x0  nop
    ctx->pc = 0x2cec6cu;
    // NOP
    ctx->pc = 0x2cec70u;
}
