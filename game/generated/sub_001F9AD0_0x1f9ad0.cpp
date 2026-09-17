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

// Function: sub_001F9AD0
// Address: 0x1f9ad0 - 0x1f9c40
void sub_001F9AD0_0x1f9ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9AD0_0x1f9ad0");
#endif

    switch (ctx->pc) {
        case 0x1f9aecu: goto label_1f9aec;
        case 0x1f9af4u: goto label_1f9af4;
        case 0x1f9b28u: goto label_1f9b28;
        case 0x1f9b50u: goto label_1f9b50;
        default: break;
    }

    ctx->pc = 0x1f9ad0u;

    // 0x1f9ad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f9ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f9ad4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f9ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f9ad8: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x1f9ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x1f9adc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f9adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f9ae0: 0x261088d0  addiu       $s0, $s0, -0x7730
    ctx->pc = 0x1f9ae0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936784));
    // 0x1f9ae4: 0xc07e6b2  jal         func_1F9AC8
    ctx->pc = 0x1F9AE4u;
    SET_GPR_U32(ctx, 31, 0x1F9AECu);
    ctx->pc = 0x1F9AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9AE4u;
    // 0x1f9ae8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9AC8u, 0x1F9AE4u, 0x1F9AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9AECu;
label_1f9aec:
    // 0x1f9aec: 0xc07e6b2  jal         func_1F9AC8
    ctx->pc = 0x1F9AECu;
    SET_GPR_U32(ctx, 31, 0x1F9AF4u);
    ctx->pc = 0x1F9AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9AECu;
    // 0x1f9af0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9AC8u, 0x1F9AECu, 0x1F9AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9AF4u;
label_1f9af4:
    // 0x1f9af4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9af4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9af8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f9af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f9afc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9AFCu;
        // 0x1f9b00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9B04u;
    // 0x1f9b04: 0x0  nop
    ctx->pc = 0x1f9b04u;
    // NOP
    // 0x1f9b08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f9b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f9b0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f9b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f9b10: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f9b10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9b14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f9b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9b18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f9b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f9b1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f9b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f9b20: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x1F9B20u;
    SET_GPR_U32(ctx, 31, 0x1F9B28u);
    ctx->pc = 0x1F9B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9B20u;
    // 0x1f9b24: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x1F9B20u, 0x1F9B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9B28u;
label_1f9b28:
    // 0x1f9b28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f9b28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9b2c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f9b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f9b30: 0x1840003c  blez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1F9B30u;
    {
        const bool branch_taken_0x1f9b30 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F9B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9B30u;
        // 0x1f9b34: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9b30) {
            ctx->pc = 0x1F9C24u;
            goto label_1f9c24;
        }
    }
    ctx->pc = 0x1F9B38u;
    // 0x1f9b38: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1f9b38u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9b3c: 0x240c00f0  addiu       $t4, $zero, 0xF0
    ctx->pc = 0x1f9b3cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x1f9b40: 0x240a0028  addiu       $t2, $zero, 0x28
    ctx->pc = 0x1f9b40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1f9b44: 0x24090029  addiu       $t1, $zero, 0x29
    ctx->pc = 0x1f9b44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1f9b48: 0x2281821  addu        $v1, $s1, $t0
    ctx->pc = 0x1f9b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x1f9b4c: 0x0  nop
    ctx->pc = 0x1f9b4cu;
    // NOP
label_1f9b50:
    // 0x1f9b50: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x1f9b50u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f9b54: 0x24a2007f  addiu       $v0, $a1, 0x7F
    ctx->pc = 0x1f9b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    // 0x1f9b58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f9b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f9b5c: 0x2c42001f  sltiu       $v0, $v0, 0x1F
    ctx->pc = 0x1f9b5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f9b60: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F9B60u;
    {
        const bool branch_taken_0x1f9b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9b60) {
            ctx->pc = 0x1F9B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9B60u;
            // 0x1f9b64: 0x90640001  lbu         $a0, 0x1($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9B80u;
            goto label_1f9b80;
        }
    }
    ctx->pc = 0x1F9B68u;
    // 0x1f9b68: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x1f9b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1f9b6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f9b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f9b70: 0x2c42001d  sltiu       $v0, $v0, 0x1D
    ctx->pc = 0x1f9b70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)29) ? 1 : 0);
    // 0x1f9b74: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1F9B74u;
    {
        const bool branch_taken_0x1f9b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9B74u;
        // 0x1f9b78: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9b74) {
            ctx->pc = 0x1F9C00u;
            goto label_1f9c00;
        }
    }
    ctx->pc = 0x1F9B7Cu;
    // 0x1f9b7c: 0x90640001  lbu         $a0, 0x1($v1)
    ctx->pc = 0x1f9b7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_1f9b80:
    // 0x1f9b80: 0x248200c0  addiu       $v0, $a0, 0xC0
    ctx->pc = 0x1f9b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x1f9b84: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1f9b84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f9b88: 0x2cc3003f  sltiu       $v1, $a2, 0x3F
    ctx->pc = 0x1f9b88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)63) ? 1 : 0);
    // 0x1f9b8c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9B8Cu;
    {
        const bool branch_taken_0x1f9b8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9B8Cu;
        // 0x1f9b90: 0x24820080  addiu       $v0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9b8c) {
            ctx->pc = 0x1F9BA4u;
            goto label_1f9ba4;
        }
    }
    ctx->pc = 0x1F9B94u;
    // 0x1f9b94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f9b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f9b98: 0x2c42007d  sltiu       $v0, $v0, 0x7D
    ctx->pc = 0x1f9b98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x1f9b9c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F9B9Cu;
    {
        const bool branch_taken_0x1f9b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9B9Cu;
        // 0x1f9ba0: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9b9c) {
            ctx->pc = 0x1F9BE0u;
            goto label_1f9be0;
        }
    }
    ctx->pc = 0x1F9BA4u;
label_1f9ba4:
    // 0x1f9ba4: 0x14ac0009  bne         $a1, $t4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F9BA4u;
    {
        const bool branch_taken_0x1f9ba4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 12));
        ctx->pc = 0x1F9BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9BA4u;
        // 0x1f9ba8: 0x2cc20010  sltiu       $v0, $a2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ba4) {
            ctx->pc = 0x1F9BCCu;
            goto label_1f9bcc;
        }
    }
    ctx->pc = 0x1F9BACu;
    // 0x1f9bac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F9BACu;
    {
        const bool branch_taken_0x1f9bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9BACu;
        // 0x1f9bb0: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9bac) {
            ctx->pc = 0x1F9BC8u;
            goto label_1f9bc8;
        }
    }
    ctx->pc = 0x1F9BB4u;
    // 0x1f9bb4: 0x248200ac  addiu       $v0, $a0, 0xAC
    ctx->pc = 0x1f9bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 172));
    // 0x1f9bb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f9bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f9bbc: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x1f9bbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1f9bc0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F9BC0u;
    {
        const bool branch_taken_0x1f9bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9BC0u;
        // 0x1f9bc4: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9bc0) {
            ctx->pc = 0x1F9BCCu;
            goto label_1f9bcc;
        }
    }
    ctx->pc = 0x1F9BC8u;
label_1f9bc8:
    // 0x1f9bc8: 0x47800a  movz        $s0, $v0, $a3
    ctx->pc = 0x1f9bc8u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_1f9bcc:
    // 0x1f9bcc: 0x6010011  bgez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F9BCCu;
    {
        const bool branch_taken_0x1f9bcc = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1F9BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9BCCu;
        // 0x1f9bd0: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9bcc) {
            ctx->pc = 0x1F9C14u;
            goto label_1f9c14;
        }
    }
    ctx->pc = 0x1F9BD4u;
    // 0x1f9bd4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F9BD4u;
    {
        const bool branch_taken_0x1f9bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9BD4u;
        // 0x1f9bd8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9bd4) {
            ctx->pc = 0x1F9C14u;
            goto label_1f9c14;
        }
    }
    ctx->pc = 0x1F9BDCu;
    // 0x1f9bdc: 0x0  nop
    ctx->pc = 0x1f9bdcu;
    // NOP
label_1f9be0:
    // 0x1f9be0: 0x144a0003  bne         $v0, $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9BE0u;
    {
        const bool branch_taken_0x1f9be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        if (branch_taken_0x1f9be0) {
            ctx->pc = 0x1F9BF0u;
            goto label_1f9bf0;
        }
    }
    ctx->pc = 0x1F9BE8u;
    // 0x1f9be8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F9BE8u;
    {
        const bool branch_taken_0x1f9be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9BE8u;
        // 0x1f9bec: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9be8) {
            ctx->pc = 0x1F9C14u;
            goto label_1f9c14;
        }
    }
    ctx->pc = 0x1F9BF0u;
label_1f9bf0:
    // 0x1f9bf0: 0x50490008  beql        $v0, $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F9BF0u;
    {
        const bool branch_taken_0x1f9bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x1f9bf0) {
            ctx->pc = 0x1F9BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9BF0u;
            // 0x1f9bf4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9C14u;
            goto label_1f9c14;
        }
    }
    ctx->pc = 0x1F9BF8u;
    // 0x1f9bf8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F9BF8u;
    {
        const bool branch_taken_0x1f9bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9BF8u;
        // 0x1f9bfc: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9bf8) {
            ctx->pc = 0x1F9C18u;
            goto label_1f9c18;
        }
    }
    ctx->pc = 0x1F9C00u;
label_1f9c00:
    // 0x1f9c00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f9c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9c04: 0x491826  xor         $v1, $v0, $t1
    ctx->pc = 0x1f9c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
    // 0x1f9c08: 0x4a1026  xor         $v0, $v0, $t2
    ctx->pc = 0x1f9c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 10));
    // 0x1f9c0c: 0x3380a  movz        $a3, $zero, $v1
    ctx->pc = 0x1f9c0cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x1f9c10: 0x82380a  movz        $a3, $a0, $v0
    ctx->pc = 0x1f9c10u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
label_1f9c14:
    // 0x1f9c14: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9c14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1f9c18:
    // 0x1f9c18: 0x10b102a  slt         $v0, $t0, $t3
    ctx->pc = 0x1f9c18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x1f9c1c: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1F9C1Cu;
    {
        const bool branch_taken_0x1f9c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C1Cu;
        // 0x1f9c20: 0x2281821  addu        $v1, $s1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9c1c) {
            ctx->pc = 0x1F9B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9b50;
        }
    }
    ctx->pc = 0x1F9C24u;
label_1f9c24:
    // 0x1f9c24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f9c24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9c28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9c28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9c2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f9c2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f9c30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f9c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9c34: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C34u;
        // 0x1f9c38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9C3Cu;
    // 0x1f9c3c: 0x0  nop
    ctx->pc = 0x1f9c3cu;
    // NOP
    ctx->pc = 0x1f9c40u;
}
