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

// Function: sub_0020BBE0
// Address: 0x20bbe0 - 0x20bea0
void sub_0020BBE0_0x20bbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BBE0_0x20bbe0");
#endif

    switch (ctx->pc) {
        case 0x20bc0cu: goto label_20bc0c;
        case 0x20bc14u: goto label_20bc14;
        case 0x20bc28u: goto label_20bc28;
        case 0x20bc38u: goto label_20bc38;
        case 0x20bc4cu: goto label_20bc4c;
        case 0x20bc68u: goto label_20bc68;
        case 0x20bc70u: goto label_20bc70;
        case 0x20bc78u: goto label_20bc78;
        case 0x20bcacu: goto label_20bcac;
        case 0x20bcc4u: goto label_20bcc4;
        case 0x20bcdcu: goto label_20bcdc;
        case 0x20bcf4u: goto label_20bcf4;
        case 0x20bd0cu: goto label_20bd0c;
        case 0x20bd28u: goto label_20bd28;
        case 0x20bd3cu: goto label_20bd3c;
        case 0x20bd48u: goto label_20bd48;
        case 0x20bd5cu: goto label_20bd5c;
        case 0x20bd74u: goto label_20bd74;
        case 0x20bd8cu: goto label_20bd8c;
        case 0x20bda4u: goto label_20bda4;
        case 0x20bdbcu: goto label_20bdbc;
        case 0x20bdd4u: goto label_20bdd4;
        case 0x20bdecu: goto label_20bdec;
        case 0x20be04u: goto label_20be04;
        case 0x20be1cu: goto label_20be1c;
        case 0x20be34u: goto label_20be34;
        case 0x20be40u: goto label_20be40;
        case 0x20be64u: goto label_20be64;
        case 0x20be6cu: goto label_20be6c;
        default: break;
    }

    ctx->pc = 0x20bbe0u;

    // 0x20bbe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20bbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20bbe4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x20bbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x20bbe8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20bbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20bbec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20bbecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bbf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20bbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20bbf4: 0x244288d0  addiu       $v0, $v0, -0x7730
    ctx->pc = 0x20bbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x20bbf8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20bbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20bbfc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x20bbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x20bc00: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x20bc00u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x20bc04: 0xc082158  jal         func_208560
    ctx->pc = 0x20BC04u;
    SET_GPR_U32(ctx, 31, 0x20BC0Cu);
    ctx->pc = 0x20BC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BC04u;
    // 0x20bc08: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208560u, 0x20BC04u, 0x20BC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC0Cu;
label_20bc0c:
    // 0x20bc0c: 0xc08215c  jal         func_208570
    ctx->pc = 0x20BC0Cu;
    SET_GPR_U32(ctx, 31, 0x20BC14u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x20BC0Cu, 0x20BC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC14u;
label_20bc14:
    // 0x20bc14: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x20bc14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x20bc18: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20BC18u;
    {
        const bool branch_taken_0x20bc18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20bc18) {
            ctx->pc = 0x20BC60u;
            goto label_20bc60;
        }
    }
    ctx->pc = 0x20BC20u;
    // 0x20bc20: 0xc07e242  jal         func_1F8908
    ctx->pc = 0x20BC20u;
    SET_GPR_U32(ctx, 31, 0x20BC28u);
    ctx->pc = 0x1F8908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8908u, 0x20BC20u, 0x20BC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC28u;
label_20bc28:
    // 0x20bc28: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20BC28u;
    {
        const bool branch_taken_0x20bc28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20bc28) {
            ctx->pc = 0x20BC60u;
            goto label_20bc60;
        }
    }
    ctx->pc = 0x20BC30u;
    // 0x20bc30: 0xc08215c  jal         func_208570
    ctx->pc = 0x20BC30u;
    SET_GPR_U32(ctx, 31, 0x20BC38u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x20BC30u, 0x20BC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC38u;
label_20bc38:
    // 0x20bc38: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x20bc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x20bc3c: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x20BC3Cu;
    {
        const bool branch_taken_0x20bc3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x20bc3c) {
            ctx->pc = 0x20BC60u;
            goto label_20bc60;
        }
    }
    ctx->pc = 0x20BC44u;
    // 0x20bc44: 0xc08215c  jal         func_208570
    ctx->pc = 0x20BC44u;
    SET_GPR_U32(ctx, 31, 0x20BC4Cu);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x20BC44u, 0x20BC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC4Cu;
label_20bc4c:
    // 0x20bc4c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x20bc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x20bc50: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20BC50u;
    {
        const bool branch_taken_0x20bc50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC50u;
        // 0x20bc54: 0x8f8298ac  lw          $v0, -0x6754($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bc50) {
            ctx->pc = 0x20BC60u;
            goto label_20bc60;
        }
    }
    ctx->pc = 0x20BC58u;
    // 0x20bc58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20bc5c: 0xaf8298ac  sw          $v0, -0x6754($gp)
    ctx->pc = 0x20bc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940844), GPR_U32(ctx, 2));
label_20bc60:
    // 0x20bc60: 0xc08218c  jal         func_208630
    ctx->pc = 0x20BC60u;
    SET_GPR_U32(ctx, 31, 0x20BC68u);
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x20BC60u, 0x20BC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC68u;
label_20bc68:
    // 0x20bc68: 0xc0b6b62  jal         func_2DAD88
    ctx->pc = 0x20BC68u;
    SET_GPR_U32(ctx, 31, 0x20BC70u);
    ctx->pc = 0x2DAD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAD88u, 0x20BC68u, 0x20BC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC70u;
label_20bc70:
    // 0x20bc70: 0xc08215c  jal         func_208570
    ctx->pc = 0x20BC70u;
    SET_GPR_U32(ctx, 31, 0x20BC78u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x20BC70u, 0x20BC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC78u;
label_20bc78:
    // 0x20bc78: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20bc78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bc7c: 0x2c620028  sltiu       $v0, $v1, 0x28
    ctx->pc = 0x20bc7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
    // 0x20bc80: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x20BC80u;
    {
        const bool branch_taken_0x20bc80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC80u;
        // 0x20bc84: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bc80) {
            ctx->pc = 0x20BE44u;
            goto label_20be44;
        }
    }
    ctx->pc = 0x20BC88u;
    // 0x20bc88: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x20bc88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20bc8c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x20bc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x20bc90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20bc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20bc94: 0x8c634480  lw          $v1, 0x4480($v1)
    ctx->pc = 0x20bc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17536)));
    // 0x20bc98: 0x600008  jr          $v1
    ctx->pc = 0x20BC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20BCA0u: goto label_20bca0;
            case 0x20BCB8u: goto label_20bcb8;
            case 0x20BCD0u: goto label_20bcd0;
            case 0x20BCE8u: goto label_20bce8;
            case 0x20BD00u: goto label_20bd00;
            case 0x20BD18u: goto label_20bd18;
            case 0x20BD30u: goto label_20bd30;
            case 0x20BD3Cu: goto label_20bd3c;
            case 0x20BD50u: goto label_20bd50;
            case 0x20BD68u: goto label_20bd68;
            case 0x20BD80u: goto label_20bd80;
            case 0x20BD98u: goto label_20bd98;
            case 0x20BDB0u: goto label_20bdb0;
            case 0x20BDC8u: goto label_20bdc8;
            case 0x20BDE0u: goto label_20bde0;
            case 0x20BDF8u: goto label_20bdf8;
            case 0x20BE10u: goto label_20be10;
            case 0x20BE28u: goto label_20be28;
            case 0x20BE34u: goto label_20be34;
            case 0x20BE40u: goto label_20be40;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BC98u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20BCA0u;
label_20bca0:
    // 0x20bca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20bca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bca4: 0xc082564  jal         func_209590
    ctx->pc = 0x20BCA4u;
    SET_GPR_U32(ctx, 31, 0x20BCACu);
    ctx->pc = 0x20BCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BCA4u;
    // 0x20bca8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209590u, 0x20BCA4u, 0x20BCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BCACu;
label_20bcac:
    // 0x20bcac: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x20BCACu;
    {
        const bool branch_taken_0x20bcac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BCACu;
        // 0x20bcb0: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bcac) {
            ctx->pc = 0x20BE44u;
            goto label_20be44;
        }
    }
    ctx->pc = 0x20BCB4u;
    // 0x20bcb4: 0x0  nop
    ctx->pc = 0x20bcb4u;
    // NOP
label_20bcb8:
    // 0x20bcb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20bcb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bcbc: 0xc0826e0  jal         func_209B80
    ctx->pc = 0x20BCBCu;
    SET_GPR_U32(ctx, 31, 0x20BCC4u);
    ctx->pc = 0x20BCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BCBCu;
    // 0x20bcc0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209B80u, 0x20BCBCu, 0x20BCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BCC4u;
label_20bcc4:
    // 0x20bcc4: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x20BCC4u;
    {
        const bool branch_taken_0x20bcc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BCC4u;
        // 0x20bcc8: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bcc4) {
            ctx->pc = 0x20BE44u;
            goto label_20be44;
        }
    }
    ctx->pc = 0x20BCCCu;
    // 0x20bccc: 0x0  nop
    ctx->pc = 0x20bcccu;
    // NOP
label_20bcd0:
    // 0x20bcd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20bcd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bcd4: 0xc082756  jal         func_209D58
    ctx->pc = 0x20BCD4u;
    SET_GPR_U32(ctx, 31, 0x20BCDCu);
    ctx->pc = 0x20BCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BCD4u;
    // 0x20bcd8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209D58u, 0x20BCD4u, 0x20BCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BCDCu;
label_20bcdc:
    // 0x20bcdc: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x20BCDCu;
    {
        const bool branch_taken_0x20bcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BCDCu;
        // 0x20bce0: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bcdc) {
            ctx->pc = 0x20BE44u;
            goto label_20be44;
        }
    }
    ctx->pc = 0x20BCE4u;
    // 0x20bce4: 0x0  nop
    ctx->pc = 0x20bce4u;
    // NOP
label_20bce8:
    // 0x20bce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20bce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bcec: 0xc0827ce  jal         func_209F38
    ctx->pc = 0x20BCECu;
    SET_GPR_U32(ctx, 31, 0x20BCF4u);
    ctx->pc = 0x20BCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BCECu;
    // 0x20bcf0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209F38u, 0x20BCECu, 0x20BCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BCF4u;
label_20bcf4:
    // 0x20bcf4: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x20BCF4u;
    {
        const bool branch_taken_0x20bcf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BCF4u;
        // 0x20bcf8: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bcf4) {
            ctx->pc = 0x20BE44u;
            goto label_20be44;
        }
    }
    ctx->pc = 0x20BCFCu;
    // 0x20bcfc: 0x0  nop
    ctx->pc = 0x20bcfcu;
    // NOP
label_20bd00:
    // 0x20bd00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20bd00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bd04: 0xc0827ea  jal         func_209FA8
    ctx->pc = 0x20BD04u;
    SET_GPR_U32(ctx, 31, 0x20BD0Cu);
    ctx->pc = 0x20BD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BD04u;
    // 0x20bd08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209FA8u, 0x20BD04u, 0x20BD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD0Cu;
label_20bd0c:
    // 0x20bd0c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x20BD0Cu;
    {
        const bool branch_taken_0x20bd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD0Cu;
        // 0x20bd10: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bd0c) {
            ctx->pc = 0x20BE44u;
            goto label_20be44;
        }
    }
    ctx->pc = 0x20BD14u;
    // 0x20bd14: 0x0  nop
    ctx->pc = 0x20bd14u;
    // NOP
label_20bd18:
    // 0x20bd18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20bd18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bd1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20bd1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bd20: 0xc082874  jal         func_20A1D0
    ctx->pc = 0x20BD20u;
    SET_GPR_U32(ctx, 31, 0x20BD28u);
    ctx->pc = 0x20BD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BD20u;
    // 0x20bd24: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A1D0u, 0x20BD20u, 0x20BD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD28u;
label_20bd28:
    // 0x20bd28: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x20BD28u;
    {
        const bool branch_taken_0x20bd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD28u;
        // 0x20bd2c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bd28) {
            ctx->pc = 0x20BE44u;
            goto label_20be44;
        }
    }
    ctx->pc = 0x20BD30u;
label_20bd30:
    // 0x20bd30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20bd30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bd34: 0xc0828dc  jal         func_20A370
    ctx->pc = 0x20BD34u;
    SET_GPR_U32(ctx, 31, 0x20BD3Cu);
    ctx->pc = 0x20BD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BD34u;
    // 0x20bd38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A370u, 0x20BD34u, 0x20BD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD3Cu;
label_20bd3c:
    // 0x20bd3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20bd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bd40: 0xc0828de  jal         func_20A378
    ctx->pc = 0x20BD40u;
    SET_GPR_U32(ctx, 31, 0x20BD48u);
    ctx->pc = 0x20BD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BD40u;
    // 0x20bd44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A378u, 0x20BD40u, 0x20BD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD48u;
label_20bd48:
    // 0x20bd48: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x20BD48u;
    {
        const bool branch_taken_0x20bd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD48u;
        // 0x20bd4c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bd48) {
            ctx->pc = 0x20BE44u;
            goto label_20be44;
        }
    }
    ctx->pc = 0x20BD50u;
label_20bd50:
    // 0x20bd50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20bd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bd54: 0xc0828e6  jal         func_20A398
    ctx->pc = 0x20BD54u;
    SET_GPR_U32(ctx, 31, 0x20BD5Cu);
    ctx->pc = 0x20BD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BD54u;
    // 0x20bd58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A398u, 0x20BD54u, 0x20BD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD5Cu;
label_20bd5c:
    // 0x20bd5c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x20BD5Cu;
    {
        const bool branch_taken_0x20bd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD5Cu;
        // 0x20bd60: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bd5c) {
            ctx->pc = 0x20BE44u;
            goto label_20be44;
        }
    }
    ctx->pc = 0x20BD64u;
    // 0x20bd64: 0x0  nop
    ctx->pc = 0x20bd64u;
    // NOP
label_20bd68:
    // 0x20bd68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20bd68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bd6c: 0xc082a58  jal         func_20A960
    ctx->pc = 0x20BD6Cu;
    SET_GPR_U32(ctx, 31, 0x20BD74u);
    ctx->pc = 0x20BD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BD6Cu;
    // 0x20bd70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A960u, 0x20BD6Cu, 0x20BD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD74u;
label_20bd74:
    // 0x20bd74: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x20BD74u;
    {
        const bool branch_taken_0x20bd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD74u;
        // 0x20bd78: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bd74) {
            ctx->pc = 0x20BE44u;
            goto label_20be44;
        }
    }
    ctx->pc = 0x20BD7Cu;
    // 0x20bd7c: 0x0  nop
    ctx->pc = 0x20bd7cu;
    // NOP
label_20bd80:
    // 0x20bd80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20bd80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bd84: 0xc082b76  jal         func_20ADD8
    ctx->pc = 0x20BD84u;
    SET_GPR_U32(ctx, 31, 0x20BD8Cu);
    ctx->pc = 0x20BD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BD84u;
    // 0x20bd88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20ADD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADD8u, 0x20BD84u, 0x20BD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD8Cu;
label_20bd8c:
    // 0x20bd8c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x20BD8Cu;
    {
        const bool branch_taken_0x20bd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD8Cu;
        // 0x20bd90: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bd8c) {
            ctx->pc = 0x20BE44u;
            goto label_20be44;
        }
    }
    ctx->pc = 0x20BD94u;
    // 0x20bd94: 0x0  nop
    ctx->pc = 0x20bd94u;
    // NOP
label_20bd98:
    // 0x20bd98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20bd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bd9c: 0xc082cb2  jal         func_20B2C8
    ctx->pc = 0x20BD9Cu;
    SET_GPR_U32(ctx, 31, 0x20BDA4u);
    ctx->pc = 0x20BDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BD9Cu;
    // 0x20bda0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B2C8u, 0x20BD9Cu, 0x20BDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BDA4u;
label_20bda4:
    // 0x20bda4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x20BDA4u;
    {
        const bool branch_taken_0x20bda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BDA4u;
        // 0x20bda8: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bda4) {
            ctx->pc = 0x20BE44u;
            goto label_20be44;
        }
    }
    ctx->pc = 0x20BDACu;
    // 0x20bdac: 0x0  nop
    ctx->pc = 0x20bdacu;
    // NOP
label_20bdb0:
    // 0x20bdb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20bdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bdb4: 0xc082e64  jal         func_20B990
    ctx->pc = 0x20BDB4u;
    SET_GPR_U32(ctx, 31, 0x20BDBCu);
    ctx->pc = 0x20BDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BDB4u;
    // 0x20bdb8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B990u, 0x20BDB4u, 0x20BDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BDBCu;
label_20bdbc:
    // 0x20bdbc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x20BDBCu;
    {
        const bool branch_taken_0x20bdbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BDBCu;
        // 0x20bdc0: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bdbc) {
            ctx->pc = 0x20BE44u;
            goto label_20be44;
        }
    }
    ctx->pc = 0x20BDC4u;
    // 0x20bdc4: 0x0  nop
    ctx->pc = 0x20bdc4u;
    // NOP
label_20bdc8:
    // 0x20bdc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20bdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bdcc: 0xc082e8e  jal         func_20BA38
    ctx->pc = 0x20BDCCu;
    SET_GPR_U32(ctx, 31, 0x20BDD4u);
    ctx->pc = 0x20BDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BDCCu;
    // 0x20bdd0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BA38u, 0x20BDCCu, 0x20BDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BDD4u;
label_20bdd4:
    // 0x20bdd4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x20BDD4u;
    {
        const bool branch_taken_0x20bdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BDD4u;
        // 0x20bdd8: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bdd4) {
            ctx->pc = 0x20BE44u;
            goto label_20be44;
        }
    }
    ctx->pc = 0x20BDDCu;
    // 0x20bddc: 0x0  nop
    ctx->pc = 0x20bddcu;
    // NOP
label_20bde0:
    // 0x20bde0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20bde0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bde4: 0xc082eea  jal         func_20BBA8
    ctx->pc = 0x20BDE4u;
    SET_GPR_U32(ctx, 31, 0x20BDECu);
    ctx->pc = 0x20BDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BDE4u;
    // 0x20bde8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BBA8u, 0x20BDE4u, 0x20BDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BDECu;
label_20bdec:
    // 0x20bdec: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x20BDECu;
    {
        const bool branch_taken_0x20bdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BDECu;
        // 0x20bdf0: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bdec) {
            ctx->pc = 0x20BE44u;
            goto label_20be44;
        }
    }
    ctx->pc = 0x20BDF4u;
    // 0x20bdf4: 0x0  nop
    ctx->pc = 0x20bdf4u;
    // NOP
label_20bdf8:
    // 0x20bdf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20bdf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bdfc: 0xc082dcc  jal         func_20B730
    ctx->pc = 0x20BDFCu;
    SET_GPR_U32(ctx, 31, 0x20BE04u);
    ctx->pc = 0x20BE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BDFCu;
    // 0x20be00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B730u, 0x20BDFCu, 0x20BE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE04u;
label_20be04:
    // 0x20be04: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x20BE04u;
    {
        const bool branch_taken_0x20be04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE04u;
        // 0x20be08: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20be04) {
            ctx->pc = 0x20BE44u;
            goto label_20be44;
        }
    }
    ctx->pc = 0x20BE0Cu;
    // 0x20be0c: 0x0  nop
    ctx->pc = 0x20be0cu;
    // NOP
label_20be10:
    // 0x20be10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20be10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20be14: 0xc0826b0  jal         func_209AC0
    ctx->pc = 0x20BE14u;
    SET_GPR_U32(ctx, 31, 0x20BE1Cu);
    ctx->pc = 0x20BE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BE14u;
    // 0x20be18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209AC0u, 0x20BE14u, 0x20BE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE1Cu;
label_20be1c:
    // 0x20be1c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x20BE1Cu;
    {
        const bool branch_taken_0x20be1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE1Cu;
        // 0x20be20: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20be1c) {
            ctx->pc = 0x20BE44u;
            goto label_20be44;
        }
    }
    ctx->pc = 0x20BE24u;
    // 0x20be24: 0x0  nop
    ctx->pc = 0x20be24u;
    // NOP
label_20be28:
    // 0x20be28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20be28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20be2c: 0xc082d26  jal         func_20B498
    ctx->pc = 0x20BE2Cu;
    SET_GPR_U32(ctx, 31, 0x20BE34u);
    ctx->pc = 0x20BE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BE2Cu;
    // 0x20be30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B498u, 0x20BE2Cu, 0x20BE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE34u;
label_20be34:
    // 0x20be34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20be34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20be38: 0xc082db6  jal         func_20B6D8
    ctx->pc = 0x20BE38u;
    SET_GPR_U32(ctx, 31, 0x20BE40u);
    ctx->pc = 0x20BE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BE38u;
    // 0x20be3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B6D8u, 0x20BE38u, 0x20BE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE40u;
label_20be40:
    // 0x20be40: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x20be40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_20be44:
    // 0x20be44: 0x8c42885c  lw          $v0, -0x77A4($v0)
    ctx->pc = 0x20be44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936668)));
    // 0x20be48: 0x28430008  slti        $v1, $v0, 0x8
    ctx->pc = 0x20be48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x20be4c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20BE4Cu;
    {
        const bool branch_taken_0x20be4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE4Cu;
        // 0x20be50: 0x28420006  slti        $v0, $v0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20be4c) {
            ctx->pc = 0x20BE5Cu;
            goto label_20be5c;
        }
    }
    ctx->pc = 0x20BE54u;
    // 0x20be54: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20BE54u;
    {
        const bool branch_taken_0x20be54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE54u;
        // 0x20be58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20be54) {
            ctx->pc = 0x20BE88u;
            goto label_20be88;
        }
    }
    ctx->pc = 0x20BE5Cu;
label_20be5c:
    // 0x20be5c: 0xc08241a  jal         func_209068
    ctx->pc = 0x20BE5Cu;
    SET_GPR_U32(ctx, 31, 0x20BE64u);
    ctx->pc = 0x209068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209068u, 0x20BE5Cu, 0x20BE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE64u;
label_20be64:
    // 0x20be64: 0xc0821b2  jal         func_2086C8
    ctx->pc = 0x20BE64u;
    SET_GPR_U32(ctx, 31, 0x20BE6Cu);
    ctx->pc = 0x2086C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2086C8u, 0x20BE64u, 0x20BE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE6Cu;
label_20be6c:
    // 0x20be6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20be6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20be70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20be70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20be74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20be74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20be78: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20be78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20be7c: 0x8087a26  j           func_21E898
    ctx->pc = 0x20BE7Cu;
    ctx->pc = 0x20BE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BE7Cu;
    // 0x20be80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E898u;
    sub_0021E898_0x21e898(rdram, ctx, runtime); return;
    ctx->pc = 0x20BE84u;
    // 0x20be84: 0x0  nop
    ctx->pc = 0x20be84u;
    // NOP
label_20be88:
    // 0x20be88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20be88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20be8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20be8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20be90: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20be90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20be94: 0x3e00008  jr          $ra
    ctx->pc = 0x20BE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE94u;
        // 0x20be98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BE9Cu;
    // 0x20be9c: 0x0  nop
    ctx->pc = 0x20be9cu;
    // NOP
    ctx->pc = 0x20bea0u;
}
