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

// Function: sub_00284AC8
// Address: 0x284ac8 - 0x284be8
void sub_00284AC8_0x284ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284AC8_0x284ac8");
#endif

    switch (ctx->pc) {
        case 0x284b88u: goto label_284b88;
        case 0x284bb0u: goto label_284bb0;
        case 0x284bbcu: goto label_284bbc;
        case 0x284bc4u: goto label_284bc4;
        case 0x284bccu: goto label_284bcc;
        default: break;
    }

    ctx->pc = 0x284ac8u;

    // 0x284ac8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x284ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x284acc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x284accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x284ad0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x284ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x284ad4: 0x247083c0  addiu       $s0, $v1, -0x7C40
    ctx->pc = 0x284ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935488));
    // 0x284ad8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x284ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x284adc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x284adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x284ae0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284AE0u;
    {
        const bool branch_taken_0x284ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284AE0u;
        // 0x284ae4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284ae0) {
            ctx->pc = 0x284AF4u;
            goto label_284af4;
        }
    }
    ctx->pc = 0x284AE8u;
    // 0x284ae8: 0x8e020198  lw          $v0, 0x198($s0)
    ctx->pc = 0x284ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x284aec: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x284AECu;
    {
        const bool branch_taken_0x284aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284aec) {
            ctx->pc = 0x284AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284AECu;
            // 0x284af0: 0x908201bc  lbu         $v0, 0x1BC($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284B00u;
            goto label_284b00;
        }
    }
    ctx->pc = 0x284AF4u;
label_284af4:
    // 0x284af4: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x284AF4u;
    {
        const bool branch_taken_0x284af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284AF4u;
        // 0x284af8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284af4) {
            ctx->pc = 0x284BD4u;
            goto label_284bd4;
        }
    }
    ctx->pc = 0x284AFCu;
    // 0x284afc: 0x0  nop
    ctx->pc = 0x284afcu;
    // NOP
label_284b00:
    // 0x284b00: 0x2786a848  addiu       $a2, $gp, -0x57B8
    ctx->pc = 0x284b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944840));
    // 0x284b04: 0x2787a850  addiu       $a3, $gp, -0x57B0
    ctx->pc = 0x284b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944848));
    // 0x284b08: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x284b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x284b0c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x284B0Cu;
    {
        const bool branch_taken_0x284b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B0Cu;
        // 0x284b10: 0x8cf10000  lw          $s1, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284b0c) {
            ctx->pc = 0x284B24u;
            goto label_284b24;
        }
    }
    ctx->pc = 0x284B14u;
    // 0x284b14: 0x9483003c  lhu         $v1, 0x3C($a0)
    ctx->pc = 0x284b14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x284b18: 0x92020031  lbu         $v0, 0x31($s0)
    ctx->pc = 0x284b18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 49)));
    // 0x284b1c: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284B1Cu;
    {
        const bool branch_taken_0x284b1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x284b1c) {
            ctx->pc = 0x284B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284B1Cu;
            // 0x284b20: 0x8e0201a0  lw          $v0, 0x1A0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284B30u;
            goto label_284b30;
        }
    }
    ctx->pc = 0x284B24u;
label_284b24:
    // 0x284b24: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x284b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x284b28: 0x8cf10004  lw          $s1, 0x4($a3)
    ctx->pc = 0x284b28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x284b2c: 0x8e0201a0  lw          $v0, 0x1A0($s0)
    ctx->pc = 0x284b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
label_284b30:
    // 0x284b30: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x284B30u;
    {
        const bool branch_taken_0x284b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284b30) {
            ctx->pc = 0x284B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284B30u;
            // 0x284b34: 0x8e02019c  lw          $v0, 0x19C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 412)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284B9Cu;
            goto label_284b9c;
        }
    }
    ctx->pc = 0x284B38u;
    // 0x284b38: 0x30a21000  andi        $v0, $a1, 0x1000
    ctx->pc = 0x284b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4096);
    // 0x284b3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284B3Cu;
    {
        const bool branch_taken_0x284b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B3Cu;
        // 0x284b40: 0x30a22000  andi        $v0, $a1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284b3c) {
            ctx->pc = 0x284B50u;
            goto label_284b50;
        }
    }
    ctx->pc = 0x284B44u;
    // 0x284b44: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x284B44u;
    {
        const bool branch_taken_0x284b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B44u;
        // 0x284b48: 0xae00019c  sw          $zero, 0x19C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284b44) {
            ctx->pc = 0x284B74u;
            goto label_284b74;
        }
    }
    ctx->pc = 0x284B4Cu;
    // 0x284b4c: 0x0  nop
    ctx->pc = 0x284b4cu;
    // NOP
label_284b50:
    // 0x284b50: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x284B50u;
    {
        const bool branch_taken_0x284b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B50u;
        // 0x284b54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284b50) {
            ctx->pc = 0x284B70u;
            goto label_284b70;
        }
    }
    ctx->pc = 0x284B58u;
    // 0x284b58: 0x30a24000  andi        $v0, $a1, 0x4000
    ctx->pc = 0x284b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
    // 0x284b5c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284B5Cu;
    {
        const bool branch_taken_0x284b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B5Cu;
        // 0x284b60: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284b5c) {
            ctx->pc = 0x284B70u;
            goto label_284b70;
        }
    }
    ctx->pc = 0x284B64u;
    // 0x284b64: 0x30a28000  andi        $v0, $a1, 0x8000
    ctx->pc = 0x284b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x284b68: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x284B68u;
    {
        const bool branch_taken_0x284b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B68u;
        // 0x284b6c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284b68) {
            ctx->pc = 0x284B74u;
            goto label_284b74;
        }
    }
    ctx->pc = 0x284B70u;
label_284b70:
    // 0x284b70: 0xae02019c  sw          $v0, 0x19C($s0)
    ctx->pc = 0x284b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 2));
label_284b74:
    // 0x284b74: 0x3222f000  andi        $v0, $s1, 0xF000
    ctx->pc = 0x284b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)61440);
    // 0x284b78: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x284B78u;
    {
        const bool branch_taken_0x284b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284b78) {
            ctx->pc = 0x284B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284B78u;
            // 0x284b7c: 0x32220800  andi        $v0, $s1, 0x800 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2048);
            ctx->in_delay_slot = false;
            ctx->pc = 0x284B8Cu;
            goto label_284b8c;
        }
    }
    ctx->pc = 0x284B80u;
    // 0x284b80: 0xc092940  jal         func_24A500
    ctx->pc = 0x284B80u;
    SET_GPR_U32(ctx, 31, 0x284B88u);
    ctx->pc = 0x284B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284B80u;
    // 0x284b84: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x284B80u, 0x284B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284B88u;
label_284b88:
    // 0x284b88: 0x32220800  andi        $v0, $s1, 0x800
    ctx->pc = 0x284b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2048);
label_284b8c:
    // 0x284b8c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x284B8Cu;
    {
        const bool branch_taken_0x284b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B8Cu;
        // 0x284b90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284b8c) {
            ctx->pc = 0x284B98u;
            goto label_284b98;
        }
    }
    ctx->pc = 0x284B94u;
    // 0x284b94: 0xae0201a0  sw          $v0, 0x1A0($s0)
    ctx->pc = 0x284b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 2));
label_284b98:
    // 0x284b98: 0x8e02019c  lw          $v0, 0x19C($s0)
    ctx->pc = 0x284b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 412)));
label_284b9c:
    // 0x284b9c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x284b9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x284ba0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x284BA0u;
    {
        const bool branch_taken_0x284ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284ba0) {
            ctx->pc = 0x284BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284BA0u;
            // 0x284ba4: 0x8e020198  lw          $v0, 0x198($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284BD0u;
            goto label_284bd0;
        }
    }
    ctx->pc = 0x284BA8u;
    // 0x284ba8: 0xc0a131a  jal         func_284C68
    ctx->pc = 0x284BA8u;
    SET_GPR_U32(ctx, 31, 0x284BB0u);
    ctx->pc = 0x284C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284C68u, 0x284BA8u, 0x284BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284BB0u;
label_284bb0:
    // 0x284bb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x284bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284bb4: 0xc08705e  jal         func_21C178
    ctx->pc = 0x284BB4u;
    SET_GPR_U32(ctx, 31, 0x284BBCu);
    ctx->pc = 0x284BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284BB4u;
    // 0x284bb8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C178u, 0x284BB4u, 0x284BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284BBCu;
label_284bbc:
    // 0x284bbc: 0xc0a1328  jal         func_284CA0
    ctx->pc = 0x284BBCu;
    SET_GPR_U32(ctx, 31, 0x284BC4u);
    ctx->pc = 0x284CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284CA0u, 0x284BBCu, 0x284BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284BC4u;
label_284bc4:
    // 0x284bc4: 0xc0a10be  jal         func_2842F8
    ctx->pc = 0x284BC4u;
    SET_GPR_U32(ctx, 31, 0x284BCCu);
    ctx->pc = 0x284BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284BC4u;
    // 0x284bc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2842F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2842F8u, 0x284BC4u, 0x284BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284BCCu;
label_284bcc:
    // 0x284bcc: 0x8e020198  lw          $v0, 0x198($s0)
    ctx->pc = 0x284bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
label_284bd0:
    // 0x284bd0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x284bd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_284bd4:
    // 0x284bd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x284bd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284bd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x284bd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x284bdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x284bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284be0: 0x3e00008  jr          $ra
    ctx->pc = 0x284BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284BE0u;
        // 0x284be4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284BE8u;
}
