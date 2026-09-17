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

// Function: sub_002661E0
// Address: 0x2661e0 - 0x2663d8
void sub_002661E0_0x2661e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002661E0_0x2661e0");
#endif

    switch (ctx->pc) {
        case 0x2661f8u: goto label_2661f8;
        case 0x266220u: goto label_266220;
        case 0x266230u: goto label_266230;
        default: break;
    }

    ctx->pc = 0x2661e0u;

    // 0x2661e0: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x2661e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x2661e4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2661e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2661e8: 0x8f85aa80  lw          $a1, -0x5580($gp)
    ctx->pc = 0x2661e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x2661ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2661ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2661f0: 0xc0a0af4  jal         func_282BD0
    ctx->pc = 0x2661F0u;
    SET_GPR_U32(ctx, 31, 0x2661F8u);
    ctx->pc = 0x282BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282BD0u, 0x2661F0u, 0x2661F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2661F8u;
label_2661f8:
    // 0x2661f8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2661F8u;
    {
        const bool branch_taken_0x2661f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2661FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2661F8u;
        // 0x2661fc: 0x8f8baa78  lw          $t3, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2661f8) {
            ctx->pc = 0x266250u;
            goto label_266250;
        }
    }
    ctx->pc = 0x266200u;
    // 0x266200: 0x8d620438  lw          $v0, 0x438($t3)
    ctx->pc = 0x266200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1080)));
    // 0x266204: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x266204u;
    {
        const bool branch_taken_0x266204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266204) {
            ctx->pc = 0x266208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266204u;
            // 0x266208: 0x8d64000c  lw          $a0, 0xC($t3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266254u;
            goto label_266254;
        }
    }
    ctx->pc = 0x26620Cu;
    // 0x26620c: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x26620cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x266210: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x266210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x266214: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x266214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266218: 0xc0a0af2  jal         func_282BC8
    ctx->pc = 0x266218u;
    SET_GPR_U32(ctx, 31, 0x266220u);
    ctx->pc = 0x26621Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266218u;
    // 0x26621c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282BC8u, 0x266218u, 0x266220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266220u;
label_266220:
    // 0x266220: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x266220u;
    {
        const bool branch_taken_0x266220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266220u;
        // 0x266224: 0x8f8baa78  lw          $t3, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266220) {
            ctx->pc = 0x266250u;
            goto label_266250;
        }
    }
    ctx->pc = 0x266228u;
    // 0x266228: 0xc0997d8  jal         func_265F60
    ctx->pc = 0x266228u;
    SET_GPR_U32(ctx, 31, 0x266230u);
    ctx->pc = 0x26622Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266228u;
    // 0x26622c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265F60u, 0x266228u, 0x266230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266230u;
label_266230:
    // 0x266230: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x266230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x266234: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x266234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266238: 0xac620438  sw          $v0, 0x438($v1)
    ctx->pc = 0x266238u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1080), GPR_U32(ctx, 2));
    // 0x26623c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x26623cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x266240: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x266240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x266244: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x266244u;
    {
        const bool branch_taken_0x266244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266244u;
        // 0x266248: 0xa4640012  sh          $a0, 0x12($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266244) {
            ctx->pc = 0x2663CCu;
            goto label_2663cc;
        }
    }
    ctx->pc = 0x26624Cu;
    // 0x26624c: 0x0  nop
    ctx->pc = 0x26624cu;
    // NOP
label_266250:
    // 0x266250: 0x8d64000c  lw          $a0, 0xC($t3)
    ctx->pc = 0x266250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
label_266254:
    // 0x266254: 0x5480000a  bnel        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x266254u;
    {
        const bool branch_taken_0x266254 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x266254) {
            ctx->pc = 0x266258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266254u;
            // 0x266258: 0x95630010  lhu         $v1, 0x10($t3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266280u;
            goto label_266280;
        }
    }
    ctx->pc = 0x26625Cu;
    // 0x26625c: 0xad600438  sw          $zero, 0x438($t3)
    ctx->pc = 0x26625cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1080), GPR_U32(ctx, 0));
    // 0x266260: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x266260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x266264: 0x84620012  lh          $v0, 0x12($v1)
    ctx->pc = 0x266264u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x266268: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x266268u;
    {
        const bool branch_taken_0x266268 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266268u;
        // 0x26626c: 0x94640012  lhu         $a0, 0x12($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266268) {
            ctx->pc = 0x266278u;
            goto label_266278;
        }
    }
    ctx->pc = 0x266270u;
    // 0x266270: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x266270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x266274: 0xa4620012  sh          $v0, 0x12($v1)
    ctx->pc = 0x266274u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 2));
label_266278:
    // 0x266278: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x266278u;
    {
        const bool branch_taken_0x266278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266278u;
        // 0x26627c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266278) {
            ctx->pc = 0x2663CCu;
            goto label_2663cc;
        }
    }
    ctx->pc = 0x266280u;
label_266280:
    // 0x266280: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x266280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x266284: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x266284u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x266288: 0xa5620010  sh          $v0, 0x10($t3)
    ctx->pc = 0x266288u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x26628c: 0x31b83  sra         $v1, $v1, 14
    ctx->pc = 0x26628cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 14));
    // 0x266290: 0x8f8baa78  lw          $t3, -0x5588($gp)
    ctx->pc = 0x266290u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x266294: 0x94850002  lhu         $a1, 0x2($a0)
    ctx->pc = 0x266294u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x266298: 0x85620010  lh          $v0, 0x10($t3)
    ctx->pc = 0x266298u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x26629c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x26629cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2662a0: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2662a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2662a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2662A4u;
    {
        const bool branch_taken_0x2662a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2662A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2662A4u;
        // 0x2662a8: 0x836021  addu        $t4, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2662a4) {
            ctx->pc = 0x2662B4u;
            goto label_2662b4;
        }
    }
    ctx->pc = 0x2662ACu;
    // 0x2662ac: 0xad60000c  sw          $zero, 0xC($t3)
    ctx->pc = 0x2662acu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 0));
    // 0x2662b0: 0x8f8baa78  lw          $t3, -0x5588($gp)
    ctx->pc = 0x2662b0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_2662b4:
    // 0x2662b4: 0x8d620438  lw          $v0, 0x438($t3)
    ctx->pc = 0x2662b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1080)));
    // 0x2662b8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2662B8u;
    {
        const bool branch_taken_0x2662b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2662BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2662B8u;
        // 0x2662bc: 0x8f83aa80  lw          $v1, -0x5580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2662b8) {
            ctx->pc = 0x266308u;
            goto label_266308;
        }
    }
    ctx->pc = 0x2662C0u;
    // 0x2662c0: 0x906201f9  lbu         $v0, 0x1F9($v1)
    ctx->pc = 0x2662c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 505)));
    // 0x2662c4: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2662C4u;
    {
        const bool branch_taken_0x2662c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2662c4) {
            ctx->pc = 0x2662C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2662C4u;
            // 0x2662c8: 0x95830000  lhu         $v1, 0x0($t4) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26630Cu;
            goto label_26630c;
        }
    }
    ctx->pc = 0x2662CCu;
    // 0x2662cc: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x2662ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x2662d0: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x2662d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x2662d4: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2662D4u;
    {
        const bool branch_taken_0x2662d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2662d4) {
            ctx->pc = 0x2662D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2662D4u;
            // 0x2662d8: 0x95830000  lhu         $v1, 0x0($t4) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26630Cu;
            goto label_26630c;
        }
    }
    ctx->pc = 0x2662DCu;
    // 0x2662dc: 0x8c6500c4  lw          $a1, 0xC4($v1)
    ctx->pc = 0x2662dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2662e0: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x2662e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x2662e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2662e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2662e8: 0x3c040102  lui         $a0, 0x102
    ctx->pc = 0x2662e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)258 << 16));
    // 0x2662ec: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x2662ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x2662f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2662f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2662f4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2662f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2662f8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2662F8u;
    {
        const bool branch_taken_0x2662f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2662f8) {
            ctx->pc = 0x2662FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2662F8u;
            // 0x2662fc: 0x95830000  lhu         $v1, 0x0($t4) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26630Cu;
            goto label_26630c;
        }
    }
    ctx->pc = 0x266300u;
    // 0x266300: 0xad60000c  sw          $zero, 0xC($t3)
    ctx->pc = 0x266300u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 0));
    // 0x266304: 0x8f8baa78  lw          $t3, -0x5588($gp)
    ctx->pc = 0x266304u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_266308:
    // 0x266308: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x266308u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
label_26630c:
    // 0x26630c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x26630cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x266310: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x266310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x266314: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x266314u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x266318: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x266318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x26631c: 0x30640004  andi        $a0, $v1, 0x4
    ctx->pc = 0x26631cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x266320: 0x2502b  sltu        $t2, $zero, $v0
    ctx->pc = 0x266320u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x266324: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x266324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x266328: 0x30650008  andi        $a1, $v1, 0x8
    ctx->pc = 0x266328u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x26632c: 0xe4500b  movn        $t2, $a3, $a0
    ctx->pc = 0x26632cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 7));
    // 0x266330: 0x30660010  andi        $a2, $v1, 0x10
    ctx->pc = 0x266330u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x266334: 0x105500b  movn        $t2, $t0, $a1
    ctx->pc = 0x266334u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 8));
    // 0x266338: 0x30640020  andi        $a0, $v1, 0x20
    ctx->pc = 0x266338u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x26633c: 0x126500b  movn        $t2, $t1, $a2
    ctx->pc = 0x26633cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 9));
    // 0x266340: 0x44500b  movn        $t2, $v0, $a0
    ctx->pc = 0x266340u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 2));
    // 0x266344: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x266344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x266348: 0x30650040  andi        $a1, $v1, 0x40
    ctx->pc = 0x266348u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x26634c: 0x95880002  lhu         $t0, 0x2($t4)
    ctx->pc = 0x26634cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x266350: 0x45500b  movn        $t2, $v0, $a1
    ctx->pc = 0x266350u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 2));
    // 0x266354: 0x30650100  andi        $a1, $v1, 0x100
    ctx->pc = 0x266354u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x266358: 0x30660080  andi        $a2, $v1, 0x80
    ctx->pc = 0x266358u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x26635c: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x26635cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x266360: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x266360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x266364: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x266364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x266368: 0x86500b  movn        $t2, $a0, $a2
    ctx->pc = 0x266368u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 4));
    // 0x26636c: 0x31040001  andi        $a0, $t0, 0x1
    ctx->pc = 0x26636cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x266370: 0x45500b  movn        $t2, $v0, $a1
    ctx->pc = 0x266370u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 2));
    // 0x266374: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x266374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x266378: 0x31050002  andi        $a1, $t0, 0x2
    ctx->pc = 0x266378u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
    // 0x26637c: 0x43500b  movn        $t2, $v0, $v1
    ctx->pc = 0x26637cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 2));
    // 0x266380: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x266380u;
    {
        const bool branch_taken_0x266380 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x266384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266380u;
        // 0x266384: 0x439c0  sll         $a3, $a0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266380) {
            ctx->pc = 0x266390u;
            goto label_266390;
        }
    }
    ctx->pc = 0x266388u;
    // 0x266388: 0x34e20010  ori         $v0, $a3, 0x10
    ctx->pc = 0x266388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16);
    // 0x26638c: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x26638cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_266390:
    // 0x266390: 0x31020004  andi        $v0, $t0, 0x4
    ctx->pc = 0x266390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
    // 0x266394: 0x34e50040  ori         $a1, $a3, 0x40
    ctx->pc = 0x266394u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x266398: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x266398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x26639c: 0x31030008  andi        $v1, $t0, 0x8
    ctx->pc = 0x26639cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8);
    // 0x2663a0: 0xa2380b  movn        $a3, $a1, $v0
    ctx->pc = 0x2663a0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
    // 0x2663a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2663a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2663a8: 0xa2040  sll         $a0, $t2, 1
    ctx->pc = 0x2663a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x2663ac: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x2663acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x2663b0: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2663b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2663b4: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x2663b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2663b8: 0x94c62d50  lhu         $a2, 0x2D50($a2)
    ctx->pc = 0x2663b8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 11600)));
    // 0x2663bc: 0x34e50020  ori         $a1, $a3, 0x20
    ctx->pc = 0x2663bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32);
    // 0x2663c0: 0xa3380b  movn        $a3, $a1, $v1
    ctx->pc = 0x2663c0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
    // 0x2663c4: 0xc73825  or          $a3, $a2, $a3
    ctx->pc = 0x2663c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x2663c8: 0xa5670006  sh          $a3, 0x6($t3)
    ctx->pc = 0x2663c8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 6), (uint16_t)GPR_U32(ctx, 7));
label_2663cc:
    // 0x2663cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2663ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2663d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2663D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2663D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2663D0u;
        // 0x2663d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2663D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2663D8u;
}
