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

// Function: sub_002CEEC8
// Address: 0x2ceec8 - 0x2cefa8
void sub_002CEEC8_0x2ceec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CEEC8_0x2ceec8");
#endif

    switch (ctx->pc) {
        case 0x2ceee0u: goto label_2ceee0;
        case 0x2cef0cu: goto label_2cef0c;
        case 0x2cef34u: goto label_2cef34;
        case 0x2cef58u: goto label_2cef58;
        case 0x2cef8cu: goto label_2cef8c;
        default: break;
    }

    ctx->pc = 0x2ceec8u;

    // 0x2ceec8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ceec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ceecc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ceeccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ceed0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ceed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ceed4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ceed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ceed8: 0xc0b2d0c  jal         func_2CB430
    ctx->pc = 0x2CEED8u;
    SET_GPR_U32(ctx, 31, 0x2CEEE0u);
    ctx->pc = 0x2CEEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEED8u;
    // 0x2ceedc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB430u, 0x2CEED8u, 0x2CEEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEEE0u;
label_2ceee0:
    // 0x2ceee0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ceee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ceee4: 0x5c8821  addu        $s1, $v0, $gp
    ctx->pc = 0x2ceee4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x2ceee8: 0x8e31a850  lw          $s1, -0x57B0($s1)
    ctx->pc = 0x2ceee8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294944848)));
    // 0x2ceeec: 0x32228000  andi        $v0, $s1, 0x8000
    ctx->pc = 0x2ceeecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32768);
    // 0x2ceef0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CEEF0u;
    {
        const bool branch_taken_0x2ceef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEEF0u;
        // 0x2ceef4: 0x32222000  andi        $v0, $s1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceef0) {
            ctx->pc = 0x2CEF18u;
            goto label_2cef18;
        }
    }
    ctx->pc = 0x2CEEF8u;
    // 0x2ceef8: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x2ceef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2ceefc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CEEFCu;
    {
        const bool branch_taken_0x2ceefc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ceefc) {
            ctx->pc = 0x2CEF00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEEFCu;
            // 0x2cef00: 0x32222000  andi        $v0, $s1, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEF18u;
            goto label_2cef18;
        }
    }
    ctx->pc = 0x2CEF04u;
    // 0x2cef04: 0xc092940  jal         func_24A500
    ctx->pc = 0x2CEF04u;
    SET_GPR_U32(ctx, 31, 0x2CEF0Cu);
    ctx->pc = 0x2CEF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEF04u;
    // 0x2cef08: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2CEF04u, 0x2CEF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEF0Cu;
label_2cef0c:
    // 0x2cef0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cef10: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2CEF10u;
    {
        const bool branch_taken_0x2cef10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEF10u;
        // 0x2cef14: 0xae020090  sw          $v0, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cef10) {
            ctx->pc = 0x2CEF38u;
            goto label_2cef38;
        }
    }
    ctx->pc = 0x2CEF18u;
label_2cef18:
    // 0x2cef18: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CEF18u;
    {
        const bool branch_taken_0x2cef18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEF18u;
        // 0x2cef1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cef18) {
            ctx->pc = 0x2CEF38u;
            goto label_2cef38;
        }
    }
    ctx->pc = 0x2CEF20u;
    // 0x2cef20: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x2cef20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2cef24: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CEF24u;
    {
        const bool branch_taken_0x2cef24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cef24) {
            ctx->pc = 0x2CEF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEF24u;
            // 0x2cef28: 0x32220060  andi        $v0, $s1, 0x60 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)96);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEF3Cu;
            goto label_2cef3c;
        }
    }
    ctx->pc = 0x2CEF2Cu;
    // 0x2cef2c: 0xc092940  jal         func_24A500
    ctx->pc = 0x2CEF2Cu;
    SET_GPR_U32(ctx, 31, 0x2CEF34u);
    ctx->pc = 0x2CEF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEF2Cu;
    // 0x2cef30: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2CEF2Cu, 0x2CEF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEF34u;
label_2cef34:
    // 0x2cef34: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x2cef34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_2cef38:
    // 0x2cef38: 0x32220060  andi        $v0, $s1, 0x60
    ctx->pc = 0x2cef38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)96);
label_2cef3c:
    // 0x2cef3c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2CEF3Cu;
    {
        const bool branch_taken_0x2cef3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEF3Cu;
        // 0x2cef40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cef3c) {
            ctx->pc = 0x2CEF78u;
            goto label_2cef78;
        }
    }
    ctx->pc = 0x2CEF44u;
    // 0x2cef44: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x2cef44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2cef48: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2CEF48u;
    {
        const bool branch_taken_0x2cef48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cef48) {
            ctx->pc = 0x2CEF84u;
            goto label_2cef84;
        }
    }
    ctx->pc = 0x2CEF50u;
    // 0x2cef50: 0xc0b28b4  jal         func_2CA2D0
    ctx->pc = 0x2CEF50u;
    SET_GPR_U32(ctx, 31, 0x2CEF58u);
    ctx->pc = 0x2CEF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEF50u;
    // 0x2cef54: 0x8e040088  lw          $a0, 0x88($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA2D0u, 0x2CEF50u, 0x2CEF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEF58u;
label_2cef58:
    // 0x2cef58: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2cef58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2cef5c: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2cef5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x2cef60: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2cef60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2cef64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cef64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cef68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cef68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cef6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cef6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cef70: 0x8092940  j           func_24A500
    ctx->pc = 0x2CEF70u;
    ctx->pc = 0x2CEF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEF70u;
    // 0x2cef74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    sub_0024A500_0x24a500(rdram, ctx, runtime); return;
    ctx->pc = 0x2CEF78u;
label_2cef78:
    // 0x2cef78: 0x32220090  andi        $v0, $s1, 0x90
    ctx->pc = 0x2cef78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)144);
    // 0x2cef7c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CEF7Cu;
    {
        const bool branch_taken_0x2cef7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cef7c) {
            ctx->pc = 0x2CEF80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEF7Cu;
            // 0x2cef80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEF98u;
            goto label_2cef98;
        }
    }
    ctx->pc = 0x2CEF84u;
label_2cef84:
    // 0x2cef84: 0xc092940  jal         func_24A500
    ctx->pc = 0x2CEF84u;
    SET_GPR_U32(ctx, 31, 0x2CEF8Cu);
    ctx->pc = 0x2CEF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEF84u;
    // 0x2cef88: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2CEF84u, 0x2CEF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEF8Cu;
label_2cef8c:
    // 0x2cef8c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2cef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2cef90: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2cef90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x2cef94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cef94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cef98:
    // 0x2cef98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cef98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cef9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cef9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cefa0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CEFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CEFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEFA0u;
        // 0x2cefa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CEFA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CEFA8u;
}
