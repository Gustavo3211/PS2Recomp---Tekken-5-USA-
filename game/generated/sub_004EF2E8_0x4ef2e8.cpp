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

// Function: sub_004EF2E8
// Address: 0x4ef2e8 - 0x4ef418
void sub_004EF2E8_0x4ef2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EF2E8_0x4ef2e8");
#endif

    switch (ctx->pc) {
        case 0x4ef304u: goto label_4ef304;
        case 0x4ef320u: goto label_4ef320;
        case 0x4ef3e0u: goto label_4ef3e0;
        case 0x4ef3f0u: goto label_4ef3f0;
        case 0x4ef400u: goto label_4ef400;
        case 0x4ef410u: goto label_4ef410;
        default: break;
    }

    ctx->pc = 0x4ef2e8u;

    // 0x4ef2e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ef2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ef2ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ef2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ef2f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ef2f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ef2f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ef2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ef2f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ef2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4ef2fc: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4EF2FCu;
    SET_GPR_U32(ctx, 31, 0x4EF304u);
    ctx->pc = 0x4EF300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EF2FCu;
    // 0x4ef300: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4EF2FCu, 0x4EF304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EF304u;
label_4ef304:
    // 0x4ef304: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4ef304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4ef308: 0xac62122c  sw          $v0, 0x122C($v1)
    ctx->pc = 0x4ef308u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F122Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F122Cu, _value); } while (0);
    // 0x4ef30c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4ef30cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ef310: 0x4420010  bltzl       $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4EF310u;
    {
        const bool branch_taken_0x4ef310 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4ef310) {
            ctx->pc = 0x4EF314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EF310u;
            // 0x4ef314: 0x8e040140  lw          $a0, 0x140($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EF354u;
            goto label_4ef354;
        }
    }
    ctx->pc = 0x4EF318u;
    // 0x4ef318: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4EF318u;
    SET_GPR_U32(ctx, 31, 0x4EF320u);
    ctx->pc = 0x4EF31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EF318u;
    // 0x4ef31c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4EF318u, 0x4EF320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EF320u;
label_4ef320:
    // 0x4ef320: 0xa6000118  sh          $zero, 0x118($s0)
    ctx->pc = 0x4ef320u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ef324: 0x240204bf  addiu       $v0, $zero, 0x4BF
    ctx->pc = 0x4ef324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1215));
    // 0x4ef328: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4ef328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4ef32c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x4ef32cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ef330: 0xa603002e  sh          $v1, 0x2E($s0)
    ctx->pc = 0x4ef330u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ef334: 0xa600011c  sh          $zero, 0x11C($s0)
    ctx->pc = 0x4ef334u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ef338: 0xa6000120  sh          $zero, 0x120($s0)
    ctx->pc = 0x4ef338u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ef33c: 0xa600015e  sh          $zero, 0x15E($s0)
    ctx->pc = 0x4ef33cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ef340: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4ef340u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ef344: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4ef344u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ef348: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4ef348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4ef34c: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4ef34cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ef350: 0x8e040140  lw          $a0, 0x140($s0)
    ctx->pc = 0x4ef350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
label_4ef354:
    // 0x4ef354: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ef354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ef358: 0xac441228  sw          $a0, 0x1228($v0)
    ctx->pc = 0x4ef358u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F1228u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1228u, _value); } while (0);
    // 0x4ef35c: 0x848301b4  lh          $v1, 0x1B4($a0)
    ctx->pc = 0x4ef35cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x4ef360: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4EF360u;
    {
        const bool branch_taken_0x4ef360 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4EF364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF360u;
        // 0x4ef364: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ef360) {
            ctx->pc = 0x4EF380u;
            goto label_4ef380;
        }
    }
    ctx->pc = 0x4EF368u;
    // 0x4ef368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ef368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ef36c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ef36cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ef370: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ef370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ef374: 0x813caae  j           func_4F2AB8
    ctx->pc = 0x4EF374u;
    ctx->pc = 0x4EF378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EF374u;
    // 0x4ef378: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F2AB8u;
    sub_004F2AB8_0x4f2ab8(rdram, ctx, runtime); return;
    ctx->pc = 0x4EF37Cu;
    // 0x4ef37c: 0x0  nop
    ctx->pc = 0x4ef37cu;
    // NOP
label_4ef380:
    // 0x4ef380: 0x84820160  lh          $v0, 0x160($a0)
    ctx->pc = 0x4ef380u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x4ef384: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4EF384u;
    {
        const bool branch_taken_0x4ef384 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4ef384) {
            ctx->pc = 0x4EF388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EF384u;
            // 0x4ef388: 0x960201bc  lhu         $v0, 0x1BC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EF3A8u;
            goto label_4ef3a8;
        }
    }
    ctx->pc = 0x4EF38Cu;
    // 0x4ef38c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ef38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ef390: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ef390u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ef394: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ef394u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ef398: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ef398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ef39c: 0x813caae  j           func_4F2AB8
    ctx->pc = 0x4EF39Cu;
    ctx->pc = 0x4EF3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EF39Cu;
    // 0x4ef3a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F2AB8u;
    sub_004F2AB8_0x4f2ab8(rdram, ctx, runtime); return;
    ctx->pc = 0x4EF3A4u;
    // 0x4ef3a4: 0x0  nop
    ctx->pc = 0x4ef3a4u;
    // NOP
label_4ef3a8:
    // 0x4ef3a8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ef3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ef3ac: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4ef3acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4ef3b0: 0x2c430005  sltiu       $v1, $v0, 0x5
    ctx->pc = 0x4ef3b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x4ef3b4: 0x5060001b  beql        $v1, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x4EF3B4u;
    {
        const bool branch_taken_0x4ef3b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ef3b4) {
            ctx->pc = 0x4EF3B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EF3B4u;
            // 0x4ef3b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EF424u;
            return;
        }
    }
    ctx->pc = 0x4EF3BCu;
    // 0x4ef3bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4ef3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4ef3c0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4ef3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4ef3c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ef3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ef3c8: 0x8c63bbb0  lw          $v1, -0x4450($v1)
    ctx->pc = 0x4ef3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949808)));
    // 0x4ef3cc: 0x600008  jr          $v1
    ctx->pc = 0x4EF3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4EF3D8u: goto label_4ef3d8;
            case 0x4EF3E8u: goto label_4ef3e8;
            case 0x4EF3F8u: goto label_4ef3f8;
            case 0x4EF408u: goto label_4ef408;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF3CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4EF3D4u;
    // 0x4ef3d4: 0x0  nop
    ctx->pc = 0x4ef3d4u;
    // NOP
label_4ef3d8:
    // 0x4ef3d8: 0xc13bd0e  jal         func_4EF438
    ctx->pc = 0x4EF3D8u;
    SET_GPR_U32(ctx, 31, 0x4EF3E0u);
    ctx->pc = 0x4EF3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EF3D8u;
    // 0x4ef3dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EF438u, 0x4EF3D8u, 0x4EF3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EF3E0u;
label_4ef3e0:
    // 0x4ef3e0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4EF3E0u;
    {
        const bool branch_taken_0x4ef3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EF3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF3E0u;
        // 0x4ef3e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ef3e0) {
            ctx->pc = 0x4EF424u;
            return;
        }
    }
    ctx->pc = 0x4EF3E8u;
label_4ef3e8:
    // 0x4ef3e8: 0xc13bd22  jal         func_4EF488
    ctx->pc = 0x4EF3E8u;
    SET_GPR_U32(ctx, 31, 0x4EF3F0u);
    ctx->pc = 0x4EF3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EF3E8u;
    // 0x4ef3ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EF488u, 0x4EF3E8u, 0x4EF3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EF3F0u;
label_4ef3f0:
    // 0x4ef3f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4EF3F0u;
    {
        const bool branch_taken_0x4ef3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EF3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF3F0u;
        // 0x4ef3f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ef3f0) {
            ctx->pc = 0x4EF424u;
            return;
        }
    }
    ctx->pc = 0x4EF3F8u;
label_4ef3f8:
    // 0x4ef3f8: 0xc13bd44  jal         func_4EF510
    ctx->pc = 0x4EF3F8u;
    SET_GPR_U32(ctx, 31, 0x4EF400u);
    ctx->pc = 0x4EF3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EF3F8u;
    // 0x4ef3fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EF510u, 0x4EF3F8u, 0x4EF400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EF400u;
label_4ef400:
    // 0x4ef400: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4EF400u;
    {
        const bool branch_taken_0x4ef400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EF404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF400u;
        // 0x4ef404: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ef400) {
            ctx->pc = 0x4EF424u;
            return;
        }
    }
    ctx->pc = 0x4EF408u;
label_4ef408:
    // 0x4ef408: 0xc13bd6c  jal         func_4EF5B0
    ctx->pc = 0x4EF408u;
    SET_GPR_U32(ctx, 31, 0x4EF410u);
    ctx->pc = 0x4EF40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EF408u;
    // 0x4ef40c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EF5B0u, 0x4EF408u, 0x4EF410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EF410u;
label_4ef410:
    // 0x4ef410: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4EF410u;
    {
        const bool branch_taken_0x4ef410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EF414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF410u;
        // 0x4ef414: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ef410) {
            ctx->pc = 0x4EF424u;
            return;
        }
    }
    ctx->pc = 0x4EF418u;
}
