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

// Function: sub_00217E98
// Address: 0x217e98 - 0x218578
void sub_00217E98_0x217e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217E98_0x217e98");
#endif

    switch (ctx->pc) {
        case 0x217ef4u: goto label_217ef4;
        case 0x217f04u: goto label_217f04;
        case 0x217f78u: goto label_217f78;
        case 0x217fa8u: goto label_217fa8;
        case 0x217fb8u: goto label_217fb8;
        case 0x217fc0u: goto label_217fc0;
        case 0x217fc8u: goto label_217fc8;
        case 0x217fd0u: goto label_217fd0;
        case 0x217fd8u: goto label_217fd8;
        case 0x217fe4u: goto label_217fe4;
        case 0x21802cu: goto label_21802c;
        case 0x21805cu: goto label_21805c;
        case 0x21808cu: goto label_21808c;
        case 0x2180d4u: goto label_2180d4;
        case 0x2180f8u: goto label_2180f8;
        case 0x218110u: goto label_218110;
        case 0x218144u: goto label_218144;
        case 0x218154u: goto label_218154;
        case 0x218160u: goto label_218160;
        case 0x218170u: goto label_218170;
        case 0x2181acu: goto label_2181ac;
        case 0x2181b8u: goto label_2181b8;
        case 0x2181c0u: goto label_2181c0;
        case 0x218204u: goto label_218204;
        case 0x21820cu: goto label_21820c;
        case 0x218224u: goto label_218224;
        case 0x218258u: goto label_218258;
        case 0x218270u: goto label_218270;
        case 0x21827cu: goto label_21827c;
        case 0x218288u: goto label_218288;
        case 0x2182c4u: goto label_2182c4;
        case 0x2182ccu: goto label_2182cc;
        case 0x2182ecu: goto label_2182ec;
        case 0x218320u: goto label_218320;
        case 0x218364u: goto label_218364;
        case 0x218380u: goto label_218380;
        case 0x21838cu: goto label_21838c;
        case 0x21839cu: goto label_21839c;
        case 0x2183a4u: goto label_2183a4;
        case 0x2183bcu: goto label_2183bc;
        case 0x2183f8u: goto label_2183f8;
        case 0x218410u: goto label_218410;
        case 0x218448u: goto label_218448;
        case 0x218458u: goto label_218458;
        case 0x218468u: goto label_218468;
        case 0x218488u: goto label_218488;
        case 0x2184bcu: goto label_2184bc;
        case 0x2184e8u: goto label_2184e8;
        case 0x2184fcu: goto label_2184fc;
        case 0x218534u: goto label_218534;
        case 0x218550u: goto label_218550;
        default: break;
    }

    ctx->pc = 0x217e98u;

    // 0x217e98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x217e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x217e9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x217e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x217ea0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x217ea0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217ea4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x217ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x217ea8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x217ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x217eac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x217eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x217eb0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x217eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x217eb4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x217eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x217eb8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x217eb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x217ebc: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x217ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x217ec0: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x217ec0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x217ec4: 0x1040019e  beqz        $v0, . + 4 + (0x19E << 2)
    ctx->pc = 0x217EC4u;
    {
        const bool branch_taken_0x217ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217EC4u;
        // 0x217ec8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217ec4) {
            ctx->pc = 0x218540u;
            goto label_218540;
        }
    }
    ctx->pc = 0x217ECCu;
    // 0x217ecc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x217eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x217ed0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x217ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x217ed4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x217ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x217ed8: 0x8c635a90  lw          $v1, 0x5A90($v1)
    ctx->pc = 0x217ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23184)));
    // 0x217edc: 0x600008  jr          $v1
    ctx->pc = 0x217EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217EE8u: goto label_217ee8;
            case 0x217FF0u: goto label_217ff0;
            case 0x218100u: goto label_218100;
            case 0x218168u: goto label_218168;
            case 0x2181D8u: goto label_2181d8;
            case 0x218290u: goto label_218290;
            case 0x218330u: goto label_218330;
            case 0x21838Cu: goto label_21838c;
            case 0x21839Cu: goto label_21839c;
            case 0x218460u: goto label_218460;
            case 0x218508u: goto label_218508;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217EDCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x217EE4u;
    // 0x217ee4: 0x0  nop
    ctx->pc = 0x217ee4u;
    // NOP
label_217ee8:
    // 0x217ee8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x217ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217eec: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x217EECu;
    SET_GPR_U32(ctx, 31, 0x217EF4u);
    ctx->pc = 0x217EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217EECu;
    // 0x217ef0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x217EECu, 0x217EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217EF4u;
label_217ef4:
    // 0x217ef4: 0x26510060  addiu       $s1, $s2, 0x60
    ctx->pc = 0x217ef4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x217ef8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x217ef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217efc: 0xc0a2954  jal         func_28A550
    ctx->pc = 0x217EFCu;
    SET_GPR_U32(ctx, 31, 0x217F04u);
    ctx->pc = 0x217F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217EFCu;
    // 0x217f00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A550u, 0x217EFCu, 0x217F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217F04u;
label_217f04:
    // 0x217f04: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x217f04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x217f08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x217f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217f0c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x217f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x217f10: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x217F10u;
    {
        const bool branch_taken_0x217f10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x217F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217F10u;
        // 0x217f14: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217f10) {
            ctx->pc = 0x217F24u;
            goto label_217f24;
        }
    }
    ctx->pc = 0x217F18u;
    // 0x217f18: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x217f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x217f1c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x217F1Cu;
    {
        const bool branch_taken_0x217f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x217F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217F1Cu;
        // 0x217f20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217f1c) {
            ctx->pc = 0x217F30u;
            goto label_217f30;
        }
    }
    ctx->pc = 0x217F24u;
label_217f24:
    // 0x217f24: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x217f24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x217f28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x217f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217f2c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x217f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_217f30:
    // 0x217f30: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x217f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x217f34: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x217f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x217f38: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x217f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x217f3c: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x217f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
    // 0x217f40: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x217f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x217f44: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x217f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x217f48: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x217F48u;
    {
        const bool branch_taken_0x217f48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x217F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217F48u;
        // 0x217f4c: 0x3c14003c  lui         $s4, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217f48) {
            ctx->pc = 0x217F80u;
            goto label_217f80;
        }
    }
    ctx->pc = 0x217F50u;
    // 0x217f50: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x217f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x217f54: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x217f54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x217f58: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x217f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x217f5c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x217f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x217f60: 0x2684c450  addiu       $a0, $s4, -0x3BB0
    ctx->pc = 0x217f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294952016));
    // 0x217f64: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x217f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x217f68: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x217f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x217f6c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x217f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x217f70: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x217F70u;
    SET_GPR_U32(ctx, 31, 0x217F78u);
    ctx->pc = 0x217F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217F70u;
    // 0x217f74: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x217F70u, 0x217F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217F78u;
label_217f78:
    // 0x217f78: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x217F78u;
    {
        const bool branch_taken_0x217f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217F78u;
        // 0x217f7c: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217f78) {
            ctx->pc = 0x217FACu;
            goto label_217fac;
        }
    }
    ctx->pc = 0x217F80u;
label_217f80:
    // 0x217f80: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x217f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x217f84: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x217f84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x217f88: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x217f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x217f8c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x217f8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x217f90: 0x2684c450  addiu       $a0, $s4, -0x3BB0
    ctx->pc = 0x217f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294952016));
    // 0x217f94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x217f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217f98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x217f98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217f9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x217f9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217fa0: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x217FA0u;
    SET_GPR_U32(ctx, 31, 0x217FA8u);
    ctx->pc = 0x217FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217FA0u;
    // 0x217fa4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x217FA0u, 0x217FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217FA8u;
label_217fa8:
    // 0x217fa8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x217fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_217fac:
    // 0x217fac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x217facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x217fb0: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x217FB0u;
    SET_GPR_U32(ctx, 31, 0x217FB8u);
    ctx->pc = 0x217FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217FB0u;
    // 0x217fb4: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x217FB0u, 0x217FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217FB8u;
label_217fb8:
    // 0x217fb8: 0xc082fd0  jal         func_20BF40
    ctx->pc = 0x217FB8u;
    SET_GPR_U32(ctx, 31, 0x217FC0u);
    ctx->pc = 0x217FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217FB8u;
    // 0x217fbc: 0xac400050  sw          $zero, 0x50($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BF40u, 0x217FB8u, 0x217FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217FC0u;
label_217fc0:
    // 0x217fc0: 0xc0a0f6a  jal         func_283DA8
    ctx->pc = 0x217FC0u;
    SET_GPR_U32(ctx, 31, 0x217FC8u);
    ctx->pc = 0x283DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283DA8u, 0x217FC0u, 0x217FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217FC8u;
label_217fc8:
    // 0x217fc8: 0xc0b6b5a  jal         func_2DAD68
    ctx->pc = 0x217FC8u;
    SET_GPR_U32(ctx, 31, 0x217FD0u);
    ctx->pc = 0x2DAD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAD68u, 0x217FC8u, 0x217FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217FD0u;
label_217fd0:
    // 0x217fd0: 0xc0926a0  jal         func_249A80
    ctx->pc = 0x217FD0u;
    SET_GPR_U32(ctx, 31, 0x217FD8u);
    ctx->pc = 0x249A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249A80u, 0x217FD0u, 0x217FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217FD8u;
label_217fd8:
    // 0x217fd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x217fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217fdc: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x217FDCu;
    SET_GPR_U32(ctx, 31, 0x217FE4u);
    ctx->pc = 0x217FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217FDCu;
    // 0x217fe0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x217FDCu, 0x217FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217FE4u;
label_217fe4:
    // 0x217fe4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x217FE4u;
    {
        const bool branch_taken_0x217fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217FE4u;
        // 0x217fe8: 0x8e420050  lw          $v0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217fe4) {
            ctx->pc = 0x217FFCu;
            goto label_217ffc;
        }
    }
    ctx->pc = 0x217FECu;
    // 0x217fec: 0x0  nop
    ctx->pc = 0x217fecu;
    // NOP
label_217ff0:
    // 0x217ff0: 0x26510060  addiu       $s1, $s2, 0x60
    ctx->pc = 0x217ff0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x217ff4: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x217ff4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x217ff8: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x217ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_217ffc:
    // 0x217ffc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x217ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x218000: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x218000u;
    {
        const bool branch_taken_0x218000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218000u;
        // 0x218004: 0x2684c450  addiu       $a0, $s4, -0x3BB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294952016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218000) {
            ctx->pc = 0x218038u;
            goto label_218038;
        }
    }
    ctx->pc = 0x218008u;
    // 0x218008: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x218008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x21800c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21800cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x218010: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x218010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x218014: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x218014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x218018: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x218018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x21801c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x21801cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x218020: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x218020u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x218024: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x218024u;
    SET_GPR_U32(ctx, 31, 0x21802Cu);
    ctx->pc = 0x218028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218024u;
    // 0x218028: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x218024u, 0x21802Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21802Cu;
label_21802c:
    // 0x21802c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x21802Cu;
    {
        const bool branch_taken_0x21802c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21802Cu;
        // 0x218030: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21802c) {
            ctx->pc = 0x218060u;
            goto label_218060;
        }
    }
    ctx->pc = 0x218034u;
    // 0x218034: 0x0  nop
    ctx->pc = 0x218034u;
    // NOP
label_218038:
    // 0x218038: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x218038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x21803c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21803cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x218040: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x218040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x218044: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x218044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x218048: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x218048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21804c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21804cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218050: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x218050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218054: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x218054u;
    SET_GPR_U32(ctx, 31, 0x21805Cu);
    ctx->pc = 0x218058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218054u;
    // 0x218058: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x218054u, 0x21805Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21805Cu;
label_21805c:
    // 0x21805c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x21805cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_218060:
    // 0x218060: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x218060u;
    {
        const bool branch_taken_0x218060 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x218060) {
            ctx->pc = 0x218064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218060u;
            // 0x218064: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21807Cu;
            goto label_21807c;
        }
    }
    ctx->pc = 0x218068u;
    // 0x218068: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x218068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21806c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x21806cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x218070: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x218070u;
    {
        const bool branch_taken_0x218070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x218070) {
            ctx->pc = 0x218084u;
            goto label_218084;
        }
    }
    ctx->pc = 0x218078u;
    // 0x218078: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x218078u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_21807c:
    // 0x21807c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21807cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218080: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x218080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_218084:
    // 0x218084: 0xc0a2a88  jal         func_28AA20
    ctx->pc = 0x218084u;
    SET_GPR_U32(ctx, 31, 0x21808Cu);
    ctx->pc = 0x28AA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA20u, 0x218084u, 0x21808Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21808Cu;
label_21808c:
    // 0x21808c: 0x1040012d  beqz        $v0, . + 4 + (0x12D << 2)
    ctx->pc = 0x21808Cu;
    {
        const bool branch_taken_0x21808c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21808Cu;
        // 0x218090: 0x8f839718  lw          $v1, -0x68E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21808c) {
            ctx->pc = 0x218544u;
            goto label_218544;
        }
    }
    ctx->pc = 0x218094u;
    // 0x218094: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x218094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x218098: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x218098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x21809c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x21809Cu;
    {
        const bool branch_taken_0x21809c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2180A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21809Cu;
        // 0x2180a0: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21809c) {
            ctx->pc = 0x2180E0u;
            goto label_2180e0;
        }
    }
    ctx->pc = 0x2180A4u;
    // 0x2180a4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2180a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2180a8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2180A8u;
    {
        const bool branch_taken_0x2180a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2180a8) {
            ctx->pc = 0x2180ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2180A8u;
            // 0x2180ac: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2180C4u;
            goto label_2180c4;
        }
    }
    ctx->pc = 0x2180B0u;
    // 0x2180b0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2180b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2180b4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2180b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2180b8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2180B8u;
    {
        const bool branch_taken_0x2180b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2180b8) {
            ctx->pc = 0x2180CCu;
            goto label_2180cc;
        }
    }
    ctx->pc = 0x2180C0u;
    // 0x2180c0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2180c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2180c4:
    // 0x2180c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2180c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2180c8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2180c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2180cc:
    // 0x2180cc: 0xc0a2a8c  jal         func_28AA30
    ctx->pc = 0x2180CCu;
    SET_GPR_U32(ctx, 31, 0x2180D4u);
    ctx->pc = 0x2180D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2180CCu;
    // 0x2180d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA30u, 0x2180CCu, 0x2180D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2180D4u;
label_2180d4:
    // 0x2180d4: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x2180D4u;
    {
        const bool branch_taken_0x2180d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2180D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2180D4u;
        // 0x2180d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2180d4) {
            ctx->pc = 0x218404u;
            goto label_218404;
        }
    }
    ctx->pc = 0x2180DCu;
    // 0x2180dc: 0x0  nop
    ctx->pc = 0x2180dcu;
    // NOP
label_2180e0:
    // 0x2180e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2180E0u;
    {
        const bool branch_taken_0x2180e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2180E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2180E0u;
        // 0x2180e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2180e0) {
            ctx->pc = 0x2180F0u;
            goto label_2180f0;
        }
    }
    ctx->pc = 0x2180E8u;
    // 0x2180e8: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x2180E8u;
    {
        const bool branch_taken_0x2180e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2180ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2180E8u;
        // 0x2180ec: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2180e8) {
            ctx->pc = 0x218408u;
            goto label_218408;
        }
    }
    ctx->pc = 0x2180F0u;
label_2180f0:
    // 0x2180f0: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x2180F0u;
    SET_GPR_U32(ctx, 31, 0x2180F8u);
    ctx->pc = 0x2180F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2180F0u;
    // 0x2180f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x2180F0u, 0x2180F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2180F8u;
label_2180f8:
    // 0x2180f8: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x2180F8u;
    {
        const bool branch_taken_0x2180f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2180FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2180F8u;
        // 0x2180fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2180f8) {
            ctx->pc = 0x218554u;
            goto label_218554;
        }
    }
    ctx->pc = 0x218100u;
label_218100:
    // 0x218100: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x218100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x218104: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x218104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x218108: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x218108u;
    SET_GPR_U32(ctx, 31, 0x218110u);
    ctx->pc = 0x21810Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218108u;
    // 0x21810c: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x218108u, 0x218110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218110u;
label_218110:
    // 0x218110: 0x24450058  addiu       $a1, $v0, 0x58
    ctx->pc = 0x218110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x218114: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x218114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x218118: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x218118u;
    {
        const bool branch_taken_0x218118 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x218118) {
            ctx->pc = 0x21811Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218118u;
            // 0x21811c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218134u;
            goto label_218134;
        }
    }
    ctx->pc = 0x218120u;
    // 0x218120: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x218120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x218124: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x218124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x218128: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x218128u;
    {
        const bool branch_taken_0x218128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218128u;
        // 0x21812c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218128) {
            ctx->pc = 0x21813Cu;
            goto label_21813c;
        }
    }
    ctx->pc = 0x218130u;
    // 0x218130: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x218130u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_218134:
    // 0x218134: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x218134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218138: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x218138u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_21813c:
    // 0x21813c: 0xc085f62  jal         func_217D88
    ctx->pc = 0x21813Cu;
    SET_GPR_U32(ctx, 31, 0x218144u);
    ctx->pc = 0x217D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217D88u, 0x21813Cu, 0x218144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218144u;
label_218144:
    // 0x218144: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218148: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x218148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21814c: 0xc090280  jal         func_240A00
    ctx->pc = 0x21814Cu;
    SET_GPR_U32(ctx, 31, 0x218154u);
    ctx->pc = 0x218150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21814Cu;
    // 0x218150: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240A00u, 0x21814Cu, 0x218154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218154u;
label_218154:
    // 0x218154: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x218154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218158: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x218158u;
    SET_GPR_U32(ctx, 31, 0x218160u);
    ctx->pc = 0x21815Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218158u;
    // 0x21815c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x218158u, 0x218160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218160u;
label_218160:
    // 0x218160: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x218160u;
    {
        const bool branch_taken_0x218160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218160u;
        // 0x218164: 0x8f839718  lw          $v1, -0x68E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218160) {
            ctx->pc = 0x218544u;
            goto label_218544;
        }
    }
    ctx->pc = 0x218168u;
label_218168:
    // 0x218168: 0xc085f6c  jal         func_217DB0
    ctx->pc = 0x218168u;
    SET_GPR_U32(ctx, 31, 0x218170u);
    ctx->pc = 0x217DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217DB0u, 0x218168u, 0x218170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218170u;
label_218170:
    // 0x218170: 0x144000f4  bnez        $v0, . + 4 + (0xF4 << 2)
    ctx->pc = 0x218170u;
    {
        const bool branch_taken_0x218170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218170u;
        // 0x218174: 0x8f839718  lw          $v1, -0x68E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218170) {
            ctx->pc = 0x218544u;
            goto label_218544;
        }
    }
    ctx->pc = 0x218178u;
    // 0x218178: 0x26450060  addiu       $a1, $s2, 0x60
    ctx->pc = 0x218178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x21817c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x21817cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x218180: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x218180u;
    {
        const bool branch_taken_0x218180 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x218180) {
            ctx->pc = 0x218184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218180u;
            // 0x218184: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21819Cu;
            goto label_21819c;
        }
    }
    ctx->pc = 0x218188u;
    // 0x218188: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x218188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21818c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x21818cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x218190: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x218190u;
    {
        const bool branch_taken_0x218190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x218194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218190u;
        // 0x218194: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218190) {
            ctx->pc = 0x2181A4u;
            goto label_2181a4;
        }
    }
    ctx->pc = 0x218198u;
    // 0x218198: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x218198u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_21819c:
    // 0x21819c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21819cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2181a0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2181a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2181a4:
    // 0x2181a4: 0xc0902ee  jal         func_240BB8
    ctx->pc = 0x2181A4u;
    SET_GPR_U32(ctx, 31, 0x2181ACu);
    ctx->pc = 0x240BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240BB8u, 0x2181A4u, 0x2181ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2181ACu;
label_2181ac:
    // 0x2181ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2181acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2181b0: 0xc0a2a8c  jal         func_28AA30
    ctx->pc = 0x2181B0u;
    SET_GPR_U32(ctx, 31, 0x2181B8u);
    ctx->pc = 0x2181B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2181B0u;
    // 0x2181b4: 0x2c450001  sltiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA30u, 0x2181B0u, 0x2181B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2181B8u;
label_2181b8:
    // 0x2181b8: 0xc0902ee  jal         func_240BB8
    ctx->pc = 0x2181B8u;
    SET_GPR_U32(ctx, 31, 0x2181C0u);
    ctx->pc = 0x240BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240BB8u, 0x2181B8u, 0x2181C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2181C0u;
label_2181c0:
    // 0x2181c0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2181c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2181c4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2181c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2181c8: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2181c8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2181cc: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x2181CCu;
    {
        const bool branch_taken_0x2181cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2181D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2181CCu;
        // 0x2181d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2181cc) {
            ctx->pc = 0x218408u;
            goto label_218408;
        }
    }
    ctx->pc = 0x2181D4u;
    // 0x2181d4: 0x0  nop
    ctx->pc = 0x2181d4u;
    // NOP
label_2181d8:
    // 0x2181d8: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x2181d8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x2181dc: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2181dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2181e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2181e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2181e4: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x2181e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x2181e8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2181e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2181ec: 0x2684c450  addiu       $a0, $s4, -0x3BB0
    ctx->pc = 0x2181ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294952016));
    // 0x2181f0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2181f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2181f4: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2181f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2181f8: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2181f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2181fc: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x2181FCu;
    SET_GPR_U32(ctx, 31, 0x218204u);
    ctx->pc = 0x218200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2181FCu;
    // 0x218200: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x2181FCu, 0x218204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218204u;
label_218204:
    // 0x218204: 0xc0902ee  jal         func_240BB8
    ctx->pc = 0x218204u;
    SET_GPR_U32(ctx, 31, 0x21820Cu);
    ctx->pc = 0x240BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240BB8u, 0x218204u, 0x21820Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21820Cu;
label_21820c:
    // 0x21820c: 0x144000cd  bnez        $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x21820Cu;
    {
        const bool branch_taken_0x21820c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21820Cu;
        // 0x218210: 0x8f839718  lw          $v1, -0x68E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21820c) {
            ctx->pc = 0x218544u;
            goto label_218544;
        }
    }
    ctx->pc = 0x218214u;
    // 0x218214: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x218214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x218218: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x218218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21821c: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x21821Cu;
    SET_GPR_U32(ctx, 31, 0x218224u);
    ctx->pc = 0x218220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21821Cu;
    // 0x218220: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x21821Cu, 0x218224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218224u;
label_218224:
    // 0x218224: 0x24450058  addiu       $a1, $v0, 0x58
    ctx->pc = 0x218224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x218228: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x218228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21822c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x21822Cu;
    {
        const bool branch_taken_0x21822c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21822c) {
            ctx->pc = 0x218230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21822Cu;
            // 0x218230: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218248u;
            goto label_218248;
        }
    }
    ctx->pc = 0x218234u;
    // 0x218234: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x218234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x218238: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x218238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21823c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21823Cu;
    {
        const bool branch_taken_0x21823c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x218240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21823Cu;
        // 0x218240: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21823c) {
            ctx->pc = 0x218250u;
            goto label_218250;
        }
    }
    ctx->pc = 0x218244u;
    // 0x218244: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x218244u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_218248:
    // 0x218248: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x218248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21824c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x21824cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_218250:
    // 0x218250: 0xc086304  jal         func_218C10
    ctx->pc = 0x218250u;
    SET_GPR_U32(ctx, 31, 0x218258u);
    ctx->pc = 0x218254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218250u;
    // 0x218254: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218C10u, 0x218250u, 0x218258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218258u;
label_218258:
    // 0x218258: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x218258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21825c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x21825cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x218260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218264: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x218264u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x218268: 0xc090280  jal         func_240A00
    ctx->pc = 0x218268u;
    SET_GPR_U32(ctx, 31, 0x218270u);
    ctx->pc = 0x21826Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218268u;
    // 0x21826c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240A00u, 0x218268u, 0x218270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218270u;
label_218270:
    // 0x218270: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x218270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x218274: 0xc0b4266  jal         func_2D0998
    ctx->pc = 0x218274u;
    SET_GPR_U32(ctx, 31, 0x21827Cu);
    ctx->pc = 0x218278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218274u;
    // 0x218278: 0xa0400051  sb          $zero, 0x51($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 81), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0998u, 0x218274u, 0x21827Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21827Cu;
label_21827c:
    // 0x21827c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21827cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218280: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x218280u;
    SET_GPR_U32(ctx, 31, 0x218288u);
    ctx->pc = 0x218284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218280u;
    // 0x218284: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x218280u, 0x218288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218288u;
label_218288:
    // 0x218288: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x218288u;
    {
        const bool branch_taken_0x218288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x218288) {
            ctx->pc = 0x218294u;
            goto label_218294;
        }
    }
    ctx->pc = 0x218290u;
label_218290:
    // 0x218290: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x218290u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
label_218294:
    // 0x218294: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x218294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x218298: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x218298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x21829c: 0x2690c450  addiu       $s0, $s4, -0x3BB0
    ctx->pc = 0x21829cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294952016));
    // 0x2182a0: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2182a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2182a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2182a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2182a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2182a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2182ac: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2182acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2182b0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2182b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2182b4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2182b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2182b8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2182b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2182bc: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x2182BCu;
    SET_GPR_U32(ctx, 31, 0x2182C4u);
    ctx->pc = 0x2182C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2182BCu;
    // 0x2182c0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x2182BCu, 0x2182C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2182C4u;
label_2182c4:
    // 0x2182c4: 0xc09031c  jal         func_240C70
    ctx->pc = 0x2182C4u;
    SET_GPR_U32(ctx, 31, 0x2182CCu);
    ctx->pc = 0x240C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240C70u, 0x2182C4u, 0x2182CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2182CCu;
label_2182cc:
    // 0x2182cc: 0x1040009c  beqz        $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x2182CCu;
    {
        const bool branch_taken_0x2182cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2182D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2182CCu;
        // 0x2182d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2182cc) {
            ctx->pc = 0x218540u;
            goto label_218540;
        }
    }
    ctx->pc = 0x2182D4u;
    // 0x2182d4: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x2182d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x2182d8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2182d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2182dc: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2182dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2182e0: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2182e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2182e4: 0xc0a5ec2  jal         func_297B08
    ctx->pc = 0x2182E4u;
    SET_GPR_U32(ctx, 31, 0x2182ECu);
    ctx->pc = 0x2182E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2182E4u;
    // 0x2182e8: 0x240800ff  addiu       $t0, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B08u, 0x2182E4u, 0x2182ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2182ECu;
label_2182ec:
    // 0x2182ec: 0x26450060  addiu       $a1, $s2, 0x60
    ctx->pc = 0x2182ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x2182f0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2182f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2182f4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2182F4u;
    {
        const bool branch_taken_0x2182f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2182f4) {
            ctx->pc = 0x2182F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2182F4u;
            // 0x2182f8: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218310u;
            goto label_218310;
        }
    }
    ctx->pc = 0x2182FCu;
    // 0x2182fc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2182fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x218300: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x218300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x218304: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x218304u;
    {
        const bool branch_taken_0x218304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x218304) {
            ctx->pc = 0x218318u;
            goto label_218318;
        }
    }
    ctx->pc = 0x21830Cu;
    // 0x21830c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x21830cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_218310:
    // 0x218310: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x218310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218314: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x218314u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_218318:
    // 0x218318: 0xc0a2a8c  jal         func_28AA30
    ctx->pc = 0x218318u;
    SET_GPR_U32(ctx, 31, 0x218320u);
    ctx->pc = 0x21831Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218318u;
    // 0x21831c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA30u, 0x218318u, 0x218320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218320u;
label_218320:
    // 0x218320: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x218320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218324: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x218324u;
    {
        const bool branch_taken_0x218324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218324u;
        // 0x218328: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218324) {
            ctx->pc = 0x218408u;
            goto label_218408;
        }
    }
    ctx->pc = 0x21832Cu;
    // 0x21832c: 0x0  nop
    ctx->pc = 0x21832cu;
    // NOP
label_218330:
    // 0x218330: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x218330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x218334: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x218334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x218338: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x218338u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x21833c: 0x2610c450  addiu       $s0, $s0, -0x3BB0
    ctx->pc = 0x21833cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952016));
    // 0x218340: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x218340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x218344: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x218344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x218348: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x218348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x21834c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x21834cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x218350: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x218350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x218354: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x218354u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x218358: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x218358u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x21835c: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x21835Cu;
    SET_GPR_U32(ctx, 31, 0x218364u);
    ctx->pc = 0x218360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21835Cu;
    // 0x218360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x21835Cu, 0x218364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218364u;
label_218364:
    // 0x218364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218368: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x218368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x21836c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x21836cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x218370: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x218370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x218374: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x218374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x218378: 0xc0a5ec2  jal         func_297B08
    ctx->pc = 0x218378u;
    SET_GPR_U32(ctx, 31, 0x218380u);
    ctx->pc = 0x21837Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218378u;
    // 0x21837c: 0x240800ff  addiu       $t0, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B08u, 0x218378u, 0x218380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218380u;
label_218380:
    // 0x218380: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x218380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218384: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x218384u;
    SET_GPR_U32(ctx, 31, 0x21838Cu);
    ctx->pc = 0x218388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218384u;
    // 0x218388: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x218384u, 0x21838Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21838Cu;
label_21838c:
    // 0x21838c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21838cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218390: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x218390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x218394: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x218394u;
    SET_GPR_U32(ctx, 31, 0x21839Cu);
    ctx->pc = 0x218398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218394u;
    // 0x218398: 0xaf809718  sw          $zero, -0x68E8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940440), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x218394u, 0x21839Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21839Cu;
label_21839c:
    // 0x21839c: 0xc087a30  jal         func_21E8C0
    ctx->pc = 0x21839Cu;
    SET_GPR_U32(ctx, 31, 0x2183A4u);
    ctx->pc = 0x2183A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21839Cu;
    // 0x2183a0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E8C0u, 0x21839Cu, 0x2183A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2183A4u;
label_2183a4:
    // 0x2183a4: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x2183a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x2183a8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2183a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2183ac: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2183ACu;
    {
        const bool branch_taken_0x2183ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2183B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2183ACu;
        // 0x2183b0: 0x8f839718  lw          $v1, -0x68E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2183ac) {
            ctx->pc = 0x218418u;
            goto label_218418;
        }
    }
    ctx->pc = 0x2183B4u;
    // 0x2183b4: 0xc0902ee  jal         func_240BB8
    ctx->pc = 0x2183B4u;
    SET_GPR_U32(ctx, 31, 0x2183BCu);
    ctx->pc = 0x240BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240BB8u, 0x2183B4u, 0x2183BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2183BCu;
label_2183bc:
    // 0x2183bc: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2183BCu;
    {
        const bool branch_taken_0x2183bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2183C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2183BCu;
        // 0x2183c0: 0x8f839718  lw          $v1, -0x68E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2183bc) {
            ctx->pc = 0x218418u;
            goto label_218418;
        }
    }
    ctx->pc = 0x2183C4u;
    // 0x2183c4: 0x26450060  addiu       $a1, $s2, 0x60
    ctx->pc = 0x2183c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x2183c8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2183c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2183cc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2183CCu;
    {
        const bool branch_taken_0x2183cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2183cc) {
            ctx->pc = 0x2183D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2183CCu;
            // 0x2183d0: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2183E8u;
            goto label_2183e8;
        }
    }
    ctx->pc = 0x2183D4u;
    // 0x2183d4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2183d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2183d8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2183d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2183dc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2183DCu;
    {
        const bool branch_taken_0x2183dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2183dc) {
            ctx->pc = 0x2183F0u;
            goto label_2183f0;
        }
    }
    ctx->pc = 0x2183E4u;
    // 0x2183e4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2183e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2183e8:
    // 0x2183e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2183e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2183ec: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2183ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2183f0:
    // 0x2183f0: 0xc0a2a8c  jal         func_28AA30
    ctx->pc = 0x2183F0u;
    SET_GPR_U32(ctx, 31, 0x2183F8u);
    ctx->pc = 0x2183F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2183F0u;
    // 0x2183f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA30u, 0x2183F0u, 0x2183F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2183F8u;
label_2183f8:
    // 0x2183f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2183f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2183fc: 0xae420050  sw          $v0, 0x50($s2)
    ctx->pc = 0x2183fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
    // 0x218400: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x218400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_218404:
    // 0x218404: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x218404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_218408:
    // 0x218408: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x218408u;
    SET_GPR_U32(ctx, 31, 0x218410u);
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x218408u, 0x218410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218410u;
label_218410:
    // 0x218410: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x218410u;
    {
        const bool branch_taken_0x218410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218410u;
        // 0x218414: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218410) {
            ctx->pc = 0x218554u;
            goto label_218554;
        }
    }
    ctx->pc = 0x218418u;
label_218418:
    // 0x218418: 0x28620259  slti        $v0, $v1, 0x259
    ctx->pc = 0x218418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)601) ? 1 : 0);
    // 0x21841c: 0x5440004a  bnel        $v0, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x21841Cu;
    {
        const bool branch_taken_0x21841c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21841c) {
            ctx->pc = 0x218420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21841Cu;
            // 0x218420: 0x731821  addu        $v1, $v1, $s3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218548u;
            goto label_218548;
        }
    }
    ctx->pc = 0x218424u;
    // 0x218424: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x218424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x218428: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x218428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21842c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x21842cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x218430: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x218430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x218434: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x218434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x218438: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x218438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21843c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21843cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218440: 0xc0a5ea4  jal         func_297A90
    ctx->pc = 0x218440u;
    SET_GPR_U32(ctx, 31, 0x218448u);
    ctx->pc = 0x218444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218440u;
    // 0x218444: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297A90u, 0x218440u, 0x218448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218448u;
label_218448:
    // 0x218448: 0xaf809718  sw          $zero, -0x68E8($gp)
    ctx->pc = 0x218448u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940440), GPR_U32(ctx, 0));
    // 0x21844c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21844cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218450: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x218450u;
    SET_GPR_U32(ctx, 31, 0x218458u);
    ctx->pc = 0x218454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218450u;
    // 0x218454: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x218450u, 0x218458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218458u;
label_218458:
    // 0x218458: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x218458u;
    {
        const bool branch_taken_0x218458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218458u;
        // 0x21845c: 0x8f839718  lw          $v1, -0x68E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218458) {
            ctx->pc = 0x218544u;
            goto label_218544;
        }
    }
    ctx->pc = 0x218460u;
label_218460:
    // 0x218460: 0xc087a30  jal         func_21E8C0
    ctx->pc = 0x218460u;
    SET_GPR_U32(ctx, 31, 0x218468u);
    ctx->pc = 0x218464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218460u;
    // 0x218464: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E8C0u, 0x218460u, 0x218468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218468u;
label_218468:
    // 0x218468: 0x8f839718  lw          $v1, -0x68E8($gp)
    ctx->pc = 0x218468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940440)));
    // 0x21846c: 0x2862003c  slti        $v0, $v1, 0x3C
    ctx->pc = 0x21846cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x218470: 0x54400035  bnel        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x218470u;
    {
        const bool branch_taken_0x218470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x218470) {
            ctx->pc = 0x218474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218470u;
            // 0x218474: 0x731821  addu        $v1, $v1, $s3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218548u;
            goto label_218548;
        }
    }
    ctx->pc = 0x218478u;
    // 0x218478: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x218478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x21847c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21847cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x218480: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x218480u;
    SET_GPR_U32(ctx, 31, 0x218488u);
    ctx->pc = 0x218484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218480u;
    // 0x218484: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x218480u, 0x218488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218488u;
label_218488:
    // 0x218488: 0x24450058  addiu       $a1, $v0, 0x58
    ctx->pc = 0x218488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x21848c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x21848cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x218490: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x218490u;
    {
        const bool branch_taken_0x218490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x218490) {
            ctx->pc = 0x218494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218490u;
            // 0x218494: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2184ACu;
            goto label_2184ac;
        }
    }
    ctx->pc = 0x218498u;
    // 0x218498: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x218498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21849c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x21849cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2184a0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2184A0u;
    {
        const bool branch_taken_0x2184a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2184a0) {
            ctx->pc = 0x2184B4u;
            goto label_2184b4;
        }
    }
    ctx->pc = 0x2184A8u;
    // 0x2184a8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2184a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2184ac:
    // 0x2184ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2184acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2184b0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2184b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2184b4:
    // 0x2184b4: 0xc0902c4  jal         func_240B10
    ctx->pc = 0x2184B4u;
    SET_GPR_U32(ctx, 31, 0x2184BCu);
    ctx->pc = 0x2184B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2184B4u;
    // 0x2184b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240B10u, 0x2184B4u, 0x2184BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2184BCu;
label_2184bc:
    // 0x2184bc: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2184bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2184c0: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2184c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2184c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2184c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2184c8: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x2184c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x2184cc: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x2184ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x2184d0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2184d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2184d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2184d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2184d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2184d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2184dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2184dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2184e0: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x2184E0u;
    SET_GPR_U32(ctx, 31, 0x2184E8u);
    ctx->pc = 0x2184E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2184E0u;
    // 0x2184e4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x2184E0u, 0x2184E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2184E8u;
label_2184e8:
    // 0x2184e8: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x2184e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2184ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2184ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2184f0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2184f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2184f4: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x2184F4u;
    SET_GPR_U32(ctx, 31, 0x2184FCu);
    ctx->pc = 0x2184F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2184F4u;
    // 0x2184f8: 0xa0400069  sb          $zero, 0x69($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 105), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x2184F4u, 0x2184FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2184FCu;
label_2184fc:
    // 0x2184fc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2184FCu;
    {
        const bool branch_taken_0x2184fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2184FCu;
        // 0x218500: 0x8f839718  lw          $v1, -0x68E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2184fc) {
            ctx->pc = 0x218544u;
            goto label_218544;
        }
    }
    ctx->pc = 0x218504u;
    // 0x218504: 0x0  nop
    ctx->pc = 0x218504u;
    // NOP
label_218508:
    // 0x218508: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x218508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x21850c: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x21850cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x218510: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x218510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x218514: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x218514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x218518: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x218518u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x21851c: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x21851cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x218520: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x218520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218524: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x218524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218528: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x218528u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21852c: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x21852Cu;
    SET_GPR_U32(ctx, 31, 0x218534u);
    ctx->pc = 0x218530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21852Cu;
    // 0x218530: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x21852Cu, 0x218534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218534u;
label_218534:
    // 0x218534: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x218534u;
    {
        const bool branch_taken_0x218534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218534u;
        // 0x218538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218534) {
            ctx->pc = 0x218554u;
            goto label_218554;
        }
    }
    ctx->pc = 0x21853Cu;
    // 0x21853c: 0x0  nop
    ctx->pc = 0x21853cu;
    // NOP
label_218540:
    // 0x218540: 0x8f839718  lw          $v1, -0x68E8($gp)
    ctx->pc = 0x218540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940440)));
label_218544:
    // 0x218544: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x218544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_218548:
    // 0x218548: 0xc0875c2  jal         func_21D708
    ctx->pc = 0x218548u;
    SET_GPR_U32(ctx, 31, 0x218550u);
    ctx->pc = 0x21854Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218548u;
    // 0x21854c: 0xaf839718  sw          $v1, -0x68E8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940440), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D708u, 0x218548u, 0x218550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218550u;
label_218550:
    // 0x218550: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x218550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218554:
    // 0x218554: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x218554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218558: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x218558u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21855c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21855cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218560: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x218560u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x218564: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x218564u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218568: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x218568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21856c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x21856cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x218570: 0x3e00008  jr          $ra
    ctx->pc = 0x218570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218570u;
        // 0x218574: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218578u;
}
