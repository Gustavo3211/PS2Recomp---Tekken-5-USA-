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

// Function: sub_0035EB78
// Address: 0x35eb78 - 0x35ecd0
void sub_0035EB78_0x35eb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035EB78_0x35eb78");
#endif

    switch (ctx->pc) {
        case 0x35eba8u: goto label_35eba8;
        case 0x35ebecu: goto label_35ebec;
        case 0x35ec98u: goto label_35ec98;
        case 0x35ecb4u: goto label_35ecb4;
        default: break;
    }

    ctx->pc = 0x35eb78u;

    // 0x35eb78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35eb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35eb7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35eb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35eb80: 0x3091ffff  andi        $s1, $a0, 0xFFFF
    ctx->pc = 0x35eb80u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x35eb84: 0x2e220040  sltiu       $v0, $s1, 0x40
    ctx->pc = 0x35eb84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x35eb88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35eb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35eb8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35eb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35eb90: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35EB90u;
    {
        const bool branch_taken_0x35eb90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35EB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EB90u;
        // 0x35eb94: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35eb90) {
            ctx->pc = 0x35EBB8u;
            goto label_35ebb8;
        }
    }
    ctx->pc = 0x35EB98u;
    // 0x35eb98: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35eb98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35eb9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35eb9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35eba0: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35EBA0u;
    SET_GPR_U32(ctx, 31, 0x35EBA8u);
    ctx->pc = 0x35EBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EBA0u;
    // 0x35eba4: 0x248464b8  addiu       $a0, $a0, 0x64B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35EBA0u, 0x35EBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EBA8u;
label_35eba8:
    // 0x35eba8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35eba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35ebac: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x35EBACu;
    {
        const bool branch_taken_0x35ebac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EBACu;
        // 0x35ebb0: 0x3442001f  ori         $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ebac) {
            ctx->pc = 0x35ECB8u;
            goto label_35ecb8;
        }
    }
    ctx->pc = 0x35EBB4u;
    // 0x35ebb4: 0x0  nop
    ctx->pc = 0x35ebb4u;
    // NOP
label_35ebb8:
    // 0x35ebb8: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x35ebb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x35ebbc: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x35ebbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x35ebc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35ebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35ebc4: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x35ebc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x35ebc8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x35ebc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35ebcc: 0x8c632ff4  lw          $v1, 0x2FF4($v1)
    ctx->pc = 0x35ebccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12276)));
    // 0x35ebd0: 0x4610009  bgez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x35EBD0u;
    {
        const bool branch_taken_0x35ebd0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x35EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EBD0u;
        // 0x35ebd4: 0x8f86c7e4  lw          $a2, -0x381C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ebd0) {
            ctx->pc = 0x35EBF8u;
            goto label_35ebf8;
        }
    }
    ctx->pc = 0x35EBD8u;
    // 0x35ebd8: 0x10d10007  beq         $a2, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x35EBD8u;
    {
        const bool branch_taken_0x35ebd8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 17));
        ctx->pc = 0x35EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EBD8u;
        // 0x35ebdc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ebd8) {
            ctx->pc = 0x35EBF8u;
            goto label_35ebf8;
        }
    }
    ctx->pc = 0x35EBE0u;
    // 0x35ebe0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35ebe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35ebe4: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35EBE4u;
    SET_GPR_U32(ctx, 31, 0x35EBECu);
    ctx->pc = 0x35EBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EBE4u;
    // 0x35ebe8: 0x248464f8  addiu       $a0, $a0, 0x64F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35EBE4u, 0x35EBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EBECu;
label_35ebec:
    // 0x35ebec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35ebf0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x35EBF0u;
    {
        const bool branch_taken_0x35ebf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EBF0u;
        // 0x35ebf4: 0x3442001d  ori         $v0, $v0, 0x1D (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ebf0) {
            ctx->pc = 0x35ECB8u;
            goto label_35ecb8;
        }
    }
    ctx->pc = 0x35EBF8u;
label_35ebf8:
    // 0x35ebf8: 0x112840  sll         $a1, $s1, 1
    ctx->pc = 0x35ebf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x35ebfc: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x35ebfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x35ec00: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x35ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x35ec04: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x35ec04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x35ec08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35ec08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35ec0c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x35ec0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x35ec10: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x35ec10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x35ec14: 0x24212c68  addiu       $at, $at, 0x2C68
    ctx->pc = 0x35ec14u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 11368));
    // 0x35ec18: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x35ec18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x35ec1c: 0x24672fe8  addiu       $a3, $v1, 0x2FE8
    ctx->pc = 0x35ec1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 12264));
    // 0x35ec20: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x35ec20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35ec24: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x35ec24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x35ec28: 0x878021  addu        $s0, $a0, $a3
    ctx->pc = 0x35ec28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x35ec2c: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x35ec2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x35ec30: 0x250821  addu        $at, $at, $a1
    ctx->pc = 0x35ec30u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x35ec34: 0xa4202f68  sh          $zero, 0x2F68($at)
    ctx->pc = 0x35ec34u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 12136), (uint16_t)GPR_U32(ctx, 0));
    // 0x35ec38: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x35ec38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x35ec3c: 0x14d10004  bne         $a2, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x35EC3Cu;
    {
        const bool branch_taken_0x35ec3c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 17));
        ctx->pc = 0x35EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EC3Cu;
        // 0x35ec40: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ec3c) {
            ctx->pc = 0x35EC50u;
            goto label_35ec50;
        }
    }
    ctx->pc = 0x35EC44u;
    // 0x35ec44: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x35ec44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x35ec48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x35EC48u;
    {
        const bool branch_taken_0x35ec48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EC48u;
        // 0x35ec4c: 0xaf84c7e4  sw          $a0, -0x381C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952932), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ec48) {
            ctx->pc = 0x35EC54u;
            goto label_35ec54;
        }
    }
    ctx->pc = 0x35EC50u;
label_35ec50:
    // 0x35ec50: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x35ec50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_35ec54:
    // 0x35ec54: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x35ec54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x35ec58: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x35EC58u;
    {
        const bool branch_taken_0x35ec58 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x35EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EC58u;
        // 0x35ec5c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ec58) {
            ctx->pc = 0x35EC74u;
            goto label_35ec74;
        }
    }
    ctx->pc = 0x35EC60u;
    // 0x35ec60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35ec60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35ec64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35ec64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35ec68: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x35ec68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x35ec6c: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x35ec6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x35ec70: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x35ec70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_35ec74:
    // 0x35ec74: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35EC74u;
    {
        const bool branch_taken_0x35ec74 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x35EC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EC74u;
        // 0x35ec78: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ec74) {
            ctx->pc = 0x35EC90u;
            goto label_35ec90;
        }
    }
    ctx->pc = 0x35EC7Cu;
    // 0x35ec7c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x35ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x35ec80: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35ec84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35ec84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35ec88: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x35ec88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x35ec8c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x35ec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_35ec90:
    // 0x35ec90: 0xc0d7820  jal         func_35E080
    ctx->pc = 0x35EC90u;
    SET_GPR_U32(ctx, 31, 0x35EC98u);
    ctx->pc = 0x35E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E080u, 0x35EC90u, 0x35EC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EC98u;
label_35ec98:
    // 0x35ec98: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x35ec98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x35ec9c: 0xae120010  sw          $s2, 0x10($s0)
    ctx->pc = 0x35ec9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    // 0x35eca0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35eca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35eca4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x35eca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x35eca8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x35eca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x35ecac: 0xc0d85b4  jal         func_3616D0
    ctx->pc = 0x35ECACu;
    SET_GPR_U32(ctx, 31, 0x35ECB4u);
    ctx->pc = 0x35ECB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ECACu;
    // 0x35ecb0: 0xae12000c  sw          $s2, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3616D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3616D0u, 0x35ECACu, 0x35ECB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ECB4u;
label_35ecb4:
    // 0x35ecb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35ecb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35ecb8:
    // 0x35ecb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35ecb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ecbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35ecbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35ecc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35ecc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ecc4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35ecc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35ecc8: 0x3e00008  jr          $ra
    ctx->pc = 0x35ECC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ECC8u;
        // 0x35eccc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35ECC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35ECD0u;
}
