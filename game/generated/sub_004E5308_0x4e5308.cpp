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

// Function: sub_004E5308
// Address: 0x4e5308 - 0x4e5540
void sub_004E5308_0x4e5308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5308_0x4e5308");
#endif

    switch (ctx->pc) {
        case 0x4e5324u: goto label_4e5324;
        case 0x4e5340u: goto label_4e5340;
        case 0x4e5360u: goto label_4e5360;
        case 0x4e5520u: goto label_4e5520;
        default: break;
    }

    ctx->pc = 0x4e5308u;

    // 0x4e5308: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e5308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4e530c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e530cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e5310: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e5310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5314: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e5314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e5318: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e5318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4e531c: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4E531Cu;
    SET_GPR_U32(ctx, 31, 0x4E5324u);
    ctx->pc = 0x4E5320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E531Cu;
    // 0x4e5320: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4E531Cu, 0x4E5324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5324u;
label_4e5324:
    // 0x4e5324: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e5324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e5328: 0xac6211cc  sw          $v0, 0x11CC($v1)
    ctx->pc = 0x4e5328u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F11CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F11CCu, _value); } while (0);
    // 0x4e532c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4e532cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e5330: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4E5330u;
    {
        const bool branch_taken_0x4e5330 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4E5334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5330u;
        // 0x4e5334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5330) {
            ctx->pc = 0x4E5370u;
            goto label_4e5370;
        }
    }
    ctx->pc = 0x4E5338u;
    // 0x4e5338: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4E5338u;
    SET_GPR_U32(ctx, 31, 0x4E5340u);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4E5338u, 0x4E5340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5340u;
label_4e5340:
    // 0x4e5340: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4e5340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4e5344: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4e5344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4e5348: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x4e5348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x4e534c: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x4e534cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e5350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e5350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5354: 0xa603014a  sh          $v1, 0x14A($s0)
    ctx->pc = 0x4e5354u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 330), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e5358: 0xc139550  jal         func_4E5540
    ctx->pc = 0x4E5358u;
    SET_GPR_U32(ctx, 31, 0x4E5360u);
    ctx->pc = 0x4E535Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5358u;
    // 0x4e535c: 0xa605015a  sh          $a1, 0x15A($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 346), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E5540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E5540u, 0x4E5358u, 0x4E5360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5360u;
label_4e5360:
    // 0x4e5360: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4e5360u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e5364: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4e5364u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e5368: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4e5368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4e536c: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4e536cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4e5370:
    // 0x4e5370: 0x960201bc  lhu         $v0, 0x1BC($s0)
    ctx->pc = 0x4e5370u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x4e5374: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e5374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e5378: 0x21c43  sra         $v1, $v0, 17
    ctx->pc = 0x4e5378u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4e537c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E537Cu;
    {
        const bool branch_taken_0x4e537c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E5380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E537Cu;
        // 0x4e5380: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e537c) {
            ctx->pc = 0x4E53A0u;
            goto label_4e53a0;
        }
    }
    ctx->pc = 0x4E5384u;
    // 0x4e5384: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4E5384u;
    {
        const bool branch_taken_0x4e5384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E5388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5384u;
        // 0x4e5388: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5384) {
            ctx->pc = 0x4E53B8u;
            goto label_4e53b8;
        }
    }
    ctx->pc = 0x4E538Cu;
    // 0x4e538c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e538cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e5390: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e5390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e5394: 0x3e00008  jr          $ra
    ctx->pc = 0x4E5394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E5398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5394u;
        // 0x4e5398: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E5394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E539Cu;
    // 0x4e539c: 0x0  nop
    ctx->pc = 0x4e539cu;
    // NOP
label_4e53a0:
    // 0x4e53a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e53a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e53a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e53a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e53a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e53a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e53ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e53acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e53b0: 0x81394f4  j           func_4E53D0
    ctx->pc = 0x4E53B0u;
    ctx->pc = 0x4E53B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E53B0u;
    // 0x4e53b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E53D0u;
    goto label_4e53d0;
    ctx->pc = 0x4E53B8u;
label_4e53b8:
    // 0x4e53b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e53b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e53bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e53bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e53c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e53c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e53c4: 0x813951e  j           func_4E5478
    ctx->pc = 0x4E53C4u;
    ctx->pc = 0x4E53C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E53C4u;
    // 0x4e53c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E5478u;
    goto label_4e5478;
    ctx->pc = 0x4E53CCu;
    // 0x4e53cc: 0x0  nop
    ctx->pc = 0x4e53ccu;
    // NOP
label_4e53d0:
    // 0x4e53d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e53d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e53d4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4e53d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e53d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e53d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e53dc: 0x244601bc  addiu       $a2, $v0, 0x1BC
    ctx->pc = 0x4e53dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
    // 0x4e53e0: 0x2442014a  addiu       $v0, $v0, 0x14A
    ctx->pc = 0x4e53e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 330));
    // 0x4e53e4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4e53e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e53e8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4e53e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4e53ec: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4e53ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4e53f0: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4e53f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e53f4: 0x51403  sra         $v0, $a1, 16
    ctx->pc = 0x4e53f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4e53f8: 0x4400019  bltz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x4E53F8u;
    {
        const bool branch_taken_0x4e53f8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4E53FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E53F8u;
        // 0x4e53fc: 0x3c05007f  lui         $a1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e53f8) {
            ctx->pc = 0x4E5460u;
            goto label_4e5460;
        }
    }
    ctx->pc = 0x4E5400u;
    // 0x4e5400: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4e5400u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4e5404: 0x24a511b8  addiu       $a1, $a1, 0x11B8
    ctx->pc = 0x4e5404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4536));
    // 0x4e5408: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4e5408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4e540c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e540cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e5410: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e5410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e5414: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e5414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e5418: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e5418u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e541c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e541cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e5420: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4e5420u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e5424: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x4e5424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4e5428: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4e5428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4e542c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e542cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e5430: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e5430u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e5434: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4e5434u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e5438: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4E5438u;
    {
        const bool branch_taken_0x4e5438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5438u;
        // 0x4e543c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5438) {
            ctx->pc = 0x4E5448u;
            goto label_4e5448;
        }
    }
    ctx->pc = 0x4E5440u;
    // 0x4e5440: 0x81398a8  j           func_4E62A0
    ctx->pc = 0x4E5440u;
    ctx->pc = 0x4E5444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5440u;
    // 0x4e5444: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E62A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E62A0u, 0x4E5440u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E5448u;
label_4e5448:
    // 0x4e5448: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4e5448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4e544c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x4e544cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x4e5450: 0xa462f9ac  sh          $v0, -0x654($v1)
    ctx->pc = 0x4e5450u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F9ACu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9ACu, _value); } while (0);
    // 0x4e5454: 0x813d772  j           func_4F5DC8
    ctx->pc = 0x4E5454u;
    ctx->pc = 0x4E5458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5454u;
    // 0x4e5458: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    sub_004F5DC8_0x4f5dc8(rdram, ctx, runtime); return;
    ctx->pc = 0x4E545Cu;
    // 0x4e545c: 0x0  nop
    ctx->pc = 0x4e545cu;
    // NOP
label_4e5460:
    // 0x4e5460: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4e5460u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e5464: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e5464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e5468: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4e5468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4e546c: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4e546cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e5470: 0x3e00008  jr          $ra
    ctx->pc = 0x4E5470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E5474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5470u;
        // 0x4e5474: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E5470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E5478u;
label_4e5478:
    // 0x4e5478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e5478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e547c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e547cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e5480: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e5480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5484: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4e5484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4e5488: 0x2607015a  addiu       $a3, $s0, 0x15A
    ctx->pc = 0x4e5488u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 346));
    // 0x4e548c: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4e548cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e5490: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E5490u;
    {
        const bool branch_taken_0x4e5490 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4E5494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5490u;
        // 0x4e5494: 0x2608014a  addiu       $t0, $s0, 0x14A (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 330));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5490) {
            ctx->pc = 0x4E54A8u;
            goto label_4e54a8;
        }
    }
    ctx->pc = 0x4E5498u;
    // 0x4e5498: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e5498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e549c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4e549cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e54a0: 0x81398a2  j           func_4E6288
    ctx->pc = 0x4E54A0u;
    ctx->pc = 0x4E54A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E54A0u;
    // 0x4e54a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E6288u, 0x4E54A0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E54A8u;
label_4e54a8:
    // 0x4e54a8: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4e54a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e54ac: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4e54acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4e54b0: 0x24a511b8  addiu       $a1, $a1, 0x11B8
    ctx->pc = 0x4e54b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4536));
    // 0x4e54b4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4e54b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4e54b8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4e54b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4e54bc: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x4e54bcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e54c0: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x4e54c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4e54c4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e54c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e54c8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e54c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e54cc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4e54ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4e54d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e54d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e54d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e54d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e54d8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e54d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e54dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e54dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e54e0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4e54e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e54e4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x4e54e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4e54e8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4e54e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4e54ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e54ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e54f0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e54f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e54f4: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4e54f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e54f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E54F8u;
    {
        const bool branch_taken_0x4e54f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E54FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E54F8u;
        // 0x4e54fc: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e54f8) {
            ctx->pc = 0x4E5510u;
            goto label_4e5510;
        }
    }
    ctx->pc = 0x4E5500u;
    // 0x4e5500: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e5500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e5504: 0x81398a8  j           func_4E62A0
    ctx->pc = 0x4E5504u;
    ctx->pc = 0x4E5508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5504u;
    // 0x4e5508: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E62A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E62A0u, 0x4E5504u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E550Cu;
    // 0x4e550c: 0x0  nop
    ctx->pc = 0x4e550cu;
    // NOP
label_4e5510:
    // 0x4e5510: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4e5510u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e5514: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x4e5514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x4e5518: 0xc139550  jal         func_4E5540
    ctx->pc = 0x4E5518u;
    SET_GPR_U32(ctx, 31, 0x4E5520u);
    ctx->pc = 0x4E551Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5518u;
    // 0x4e551c: 0xa4e20000  sh          $v0, 0x0($a3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E5540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E5540u, 0x4E5518u, 0x4E5520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5520u;
label_4e5520:
    // 0x4e5520: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4e5520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4e5524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e5524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5528: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e5528u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e552c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4e552cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e5530: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x4e5530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x4e5534: 0xa462f9ac  sh          $v0, -0x654($v1)
    ctx->pc = 0x4e5534u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F9ACu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9ACu, _value); } while (0);
    // 0x4e5538: 0x813d772  j           func_4F5DC8
    ctx->pc = 0x4E5538u;
    ctx->pc = 0x4E553Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5538u;
    // 0x4e553c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    sub_004F5DC8_0x4f5dc8(rdram, ctx, runtime); return;
    ctx->pc = 0x4E5540u;
}
