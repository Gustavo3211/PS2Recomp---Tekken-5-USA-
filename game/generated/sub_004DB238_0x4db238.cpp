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

// Function: sub_004DB238
// Address: 0x4db238 - 0x4db3e0
void sub_004DB238_0x4db238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB238_0x4db238");
#endif

    switch (ctx->pc) {
        case 0x4db254u: goto label_4db254;
        case 0x4db270u: goto label_4db270;
        case 0x4db3a8u: goto label_4db3a8;
        case 0x4db3b8u: goto label_4db3b8;
        case 0x4db3c8u: goto label_4db3c8;
        case 0x4db3d8u: goto label_4db3d8;
        default: break;
    }

    ctx->pc = 0x4db238u;

    // 0x4db238: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4db238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4db23c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4db23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4db240: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4db240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db244: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4db244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4db248: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4db248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4db24c: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4DB24Cu;
    SET_GPR_U32(ctx, 31, 0x4DB254u);
    ctx->pc = 0x4DB250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB24Cu;
    // 0x4db250: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4DB24Cu, 0x4DB254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB254u;
label_4db254:
    // 0x4db254: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4db254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4db258: 0xac62111c  sw          $v0, 0x111C($v1)
    ctx->pc = 0x4db258u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F111Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F111Cu, _value); } while (0);
    // 0x4db25c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4db25cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4db260: 0x4420025  bltzl       $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x4DB260u;
    {
        const bool branch_taken_0x4db260 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4db260) {
            ctx->pc = 0x4DB264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DB260u;
            // 0x4db264: 0x8e040140  lw          $a0, 0x140($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DB2F8u;
            goto label_4db2f8;
        }
    }
    ctx->pc = 0x4DB268u;
    // 0x4db268: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4DB268u;
    SET_GPR_U32(ctx, 31, 0x4DB270u);
    ctx->pc = 0x4DB26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB268u;
    // 0x4db26c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4DB268u, 0x4DB270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB270u;
label_4db270:
    // 0x4db270: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4db270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4db274: 0x248410fc  addiu       $a0, $a0, 0x10FC
    ctx->pc = 0x4db274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4348));
    // 0x4db278: 0x860201be  lh          $v0, 0x1BE($s0)
    ctx->pc = 0x4db278u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x4db27c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4db27cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F10FCu));
    // 0x4db280: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4db280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4db284: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4db284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4db288: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x4db288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4db28c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4db28cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4db290: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4db290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4db294: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4db294u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4db298: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4db298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4db29c: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4db29cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4db2a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4db2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4db2a4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4db2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4db2a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4db2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4db2ac: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4db2acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4db2b0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4db2b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4db2b4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4db2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4db2b8: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4db2b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4db2bc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4db2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4db2c0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4db2c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x4db2c4: 0x24217c18  addiu       $at, $at, 0x7C18
    ctx->pc = 0x4db2c4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 31768));
    // 0x4db2c8: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4db2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4db2cc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4db2ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4db2d0: 0xa60301bc  sh          $v1, 0x1BC($s0)
    ctx->pc = 0x4db2d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 444), (uint16_t)GPR_U32(ctx, 3));
    // 0x4db2d4: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x4db2d4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x4db2d8: 0xa606000e  sh          $a2, 0xE($s0)
    ctx->pc = 0x4db2d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x4db2dc: 0xa604014a  sh          $a0, 0x14A($s0)
    ctx->pc = 0x4db2dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 330), (uint16_t)GPR_U32(ctx, 4));
    // 0x4db2e0: 0xa6000030  sh          $zero, 0x30($s0)
    ctx->pc = 0x4db2e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x4db2e4: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4db2e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4db2e8: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4db2e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4db2ec: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4db2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4db2f0: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4db2f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4db2f4: 0x8e040140  lw          $a0, 0x140($s0)
    ctx->pc = 0x4db2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
label_4db2f8:
    // 0x4db2f8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4db2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4db2fc: 0xac441118  sw          $a0, 0x1118($v0)
    ctx->pc = 0x4db2fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F1118u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1118u, _value); } while (0);
    // 0x4db300: 0x848301b4  lh          $v1, 0x1B4($a0)
    ctx->pc = 0x4db300u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x4db304: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4DB304u;
    {
        const bool branch_taken_0x4db304 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4DB308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB304u;
        // 0x4db308: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db304) {
            ctx->pc = 0x4DB320u;
            goto label_4db320;
        }
    }
    ctx->pc = 0x4DB30Cu;
    // 0x4db30c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4db30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db310: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4db310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4db314: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4db314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4db318: 0x8136dc6  j           func_4DB718
    ctx->pc = 0x4DB318u;
    ctx->pc = 0x4DB31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB318u;
    // 0x4db31c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB718u, 0x4DB318u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DB320u;
label_4db320:
    // 0x4db320: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4db320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4db324: 0x8484016a  lh          $a0, 0x16A($a0)
    ctx->pc = 0x4db324u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 362)));
    // 0x4db328: 0x246310fc  addiu       $v1, $v1, 0x10FC
    ctx->pc = 0x4db328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4348));
    // 0x4db32c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4db32cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4db330: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4db330u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F10FCu));
    // 0x4db334: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x4db334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x4db338: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4db338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4db33c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4db33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4db340: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4db340u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4db344: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x4db344u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4db348: 0x8602016a  lh          $v0, 0x16A($s0)
    ctx->pc = 0x4db348u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 362)));
    // 0x4db34c: 0x54440008  bnel        $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4DB34Cu;
    {
        const bool branch_taken_0x4db34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x4db34c) {
            ctx->pc = 0x4DB350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DB34Cu;
            // 0x4db350: 0x960201bc  lhu         $v0, 0x1BC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DB370u;
            goto label_4db370;
        }
    }
    ctx->pc = 0x4DB354u;
    // 0x4db354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4db354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db358: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4db358u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4db35c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4db35cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4db360: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4db360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4db364: 0x8136dc6  j           func_4DB718
    ctx->pc = 0x4DB364u;
    ctx->pc = 0x4DB368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB364u;
    // 0x4db368: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB718u, 0x4DB364u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DB36Cu;
    // 0x4db36c: 0x0  nop
    ctx->pc = 0x4db36cu;
    // NOP
label_4db370:
    // 0x4db370: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4db370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4db374: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4db374u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4db378: 0x2c430005  sltiu       $v1, $v0, 0x5
    ctx->pc = 0x4db378u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x4db37c: 0x5060001b  beql        $v1, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x4DB37Cu;
    {
        const bool branch_taken_0x4db37c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4db37c) {
            ctx->pc = 0x4DB380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DB37Cu;
            // 0x4db380: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DB3ECu;
            return;
        }
    }
    ctx->pc = 0x4DB384u;
    // 0x4db384: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4db384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4db388: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4db388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4db38c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4db38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4db390: 0x8c63b8d0  lw          $v1, -0x4730($v1)
    ctx->pc = 0x4db390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949072)));
    // 0x4db394: 0x600008  jr          $v1
    ctx->pc = 0x4DB394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4DB3A0u: goto label_4db3a0;
            case 0x4DB3B0u: goto label_4db3b0;
            case 0x4DB3C0u: goto label_4db3c0;
            case 0x4DB3D0u: goto label_4db3d0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DB394u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4DB39Cu;
    // 0x4db39c: 0x0  nop
    ctx->pc = 0x4db39cu;
    // NOP
label_4db3a0:
    // 0x4db3a0: 0xc136d00  jal         func_4DB400
    ctx->pc = 0x4DB3A0u;
    SET_GPR_U32(ctx, 31, 0x4DB3A8u);
    ctx->pc = 0x4DB3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB3A0u;
    // 0x4db3a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB400u, 0x4DB3A0u, 0x4DB3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB3A8u;
label_4db3a8:
    // 0x4db3a8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4DB3A8u;
    {
        const bool branch_taken_0x4db3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DB3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB3A8u;
        // 0x4db3ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db3a8) {
            ctx->pc = 0x4DB3ECu;
            return;
        }
    }
    ctx->pc = 0x4DB3B0u;
label_4db3b0:
    // 0x4db3b0: 0xc136d14  jal         func_4DB450
    ctx->pc = 0x4DB3B0u;
    SET_GPR_U32(ctx, 31, 0x4DB3B8u);
    ctx->pc = 0x4DB3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB3B0u;
    // 0x4db3b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB450u, 0x4DB3B0u, 0x4DB3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB3B8u;
label_4db3b8:
    // 0x4db3b8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4DB3B8u;
    {
        const bool branch_taken_0x4db3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DB3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB3B8u;
        // 0x4db3bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db3b8) {
            ctx->pc = 0x4DB3ECu;
            return;
        }
    }
    ctx->pc = 0x4DB3C0u;
label_4db3c0:
    // 0x4db3c0: 0xc136d2c  jal         func_4DB4B0
    ctx->pc = 0x4DB3C0u;
    SET_GPR_U32(ctx, 31, 0x4DB3C8u);
    ctx->pc = 0x4DB3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB3C0u;
    // 0x4db3c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB4B0u, 0x4DB3C0u, 0x4DB3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB3C8u;
label_4db3c8:
    // 0x4db3c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4DB3C8u;
    {
        const bool branch_taken_0x4db3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DB3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB3C8u;
        // 0x4db3cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db3c8) {
            ctx->pc = 0x4DB3ECu;
            return;
        }
    }
    ctx->pc = 0x4DB3D0u;
label_4db3d0:
    // 0x4db3d0: 0xc136d66  jal         func_4DB598
    ctx->pc = 0x4DB3D0u;
    SET_GPR_U32(ctx, 31, 0x4DB3D8u);
    ctx->pc = 0x4DB3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB3D0u;
    // 0x4db3d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB598u, 0x4DB3D0u, 0x4DB3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB3D8u;
label_4db3d8:
    // 0x4db3d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4DB3D8u;
    {
        const bool branch_taken_0x4db3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DB3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB3D8u;
        // 0x4db3dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db3d8) {
            ctx->pc = 0x4DB3ECu;
            return;
        }
    }
    ctx->pc = 0x4DB3E0u;
}
