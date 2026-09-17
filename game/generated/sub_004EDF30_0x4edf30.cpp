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

// Function: sub_004EDF30
// Address: 0x4edf30 - 0x4ee0a8
void sub_004EDF30_0x4edf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EDF30_0x4edf30");
#endif

    switch (ctx->pc) {
        case 0x4edf4cu: goto label_4edf4c;
        case 0x4edf68u: goto label_4edf68;
        case 0x4ee020u: goto label_4ee020;
        case 0x4ee030u: goto label_4ee030;
        case 0x4ee040u: goto label_4ee040;
        case 0x4ee050u: goto label_4ee050;
        case 0x4ee060u: goto label_4ee060;
        case 0x4ee070u: goto label_4ee070;
        case 0x4ee080u: goto label_4ee080;
        case 0x4ee090u: goto label_4ee090;
        case 0x4ee0a0u: goto label_4ee0a0;
        default: break;
    }

    ctx->pc = 0x4edf30u;

    // 0x4edf30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4edf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4edf34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4edf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4edf38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4edf38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4edf3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4edf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4edf40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4edf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4edf44: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4EDF44u;
    SET_GPR_U32(ctx, 31, 0x4EDF4Cu);
    ctx->pc = 0x4EDF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EDF44u;
    // 0x4edf48: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4EDF44u, 0x4EDF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EDF4Cu;
label_4edf4c:
    // 0x4edf4c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4edf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4edf50: 0xac62120c  sw          $v0, 0x120C($v1)
    ctx->pc = 0x4edf50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F120Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F120Cu, _value); } while (0);
    // 0x4edf54: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4edf54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4edf58: 0x442000f  bltzl       $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4EDF58u;
    {
        const bool branch_taken_0x4edf58 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4edf58) {
            ctx->pc = 0x4EDF5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EDF58u;
            // 0x4edf5c: 0x8e040140  lw          $a0, 0x140($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EDF98u;
            goto label_4edf98;
        }
    }
    ctx->pc = 0x4EDF60u;
    // 0x4edf60: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4EDF60u;
    SET_GPR_U32(ctx, 31, 0x4EDF68u);
    ctx->pc = 0x4EDF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EDF60u;
    // 0x4edf64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4EDF60u, 0x4EDF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EDF68u;
label_4edf68:
    // 0x4edf68: 0xa6000118  sh          $zero, 0x118($s0)
    ctx->pc = 0x4edf68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 0));
    // 0x4edf6c: 0x240204e8  addiu       $v0, $zero, 0x4E8
    ctx->pc = 0x4edf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1256));
    // 0x4edf70: 0xa600011c  sh          $zero, 0x11C($s0)
    ctx->pc = 0x4edf70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 0));
    // 0x4edf74: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x4edf74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4edf78: 0xa6000120  sh          $zero, 0x120($s0)
    ctx->pc = 0x4edf78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 0));
    // 0x4edf7c: 0xa600015e  sh          $zero, 0x15E($s0)
    ctx->pc = 0x4edf7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4edf80: 0xa600016a  sh          $zero, 0x16A($s0)
    ctx->pc = 0x4edf80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 362), (uint16_t)GPR_U32(ctx, 0));
    // 0x4edf84: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4edf84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4edf88: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4edf88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4edf8c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4edf8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4edf90: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4edf90u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4edf94: 0x8e040140  lw          $a0, 0x140($s0)
    ctx->pc = 0x4edf94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
label_4edf98:
    // 0x4edf98: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4edf98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4edf9c: 0xac441208  sw          $a0, 0x1208($v0)
    ctx->pc = 0x4edf9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F1208u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1208u, _value); } while (0);
    // 0x4edfa0: 0x848301b4  lh          $v1, 0x1B4($a0)
    ctx->pc = 0x4edfa0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x4edfa4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4EDFA4u;
    {
        const bool branch_taken_0x4edfa4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4EDFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDFA4u;
        // 0x4edfa8: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4edfa4) {
            ctx->pc = 0x4EDFC0u;
            goto label_4edfc0;
        }
    }
    ctx->pc = 0x4EDFACu;
    // 0x4edfac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4edfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4edfb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4edfb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4edfb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4edfb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4edfb8: 0x813bcb2  j           func_4EF2C8
    ctx->pc = 0x4EDFB8u;
    ctx->pc = 0x4EDFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EDFB8u;
    // 0x4edfbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF2C8u;
    sub_004EF2C8_0x4ef2c8(rdram, ctx, runtime); return;
    ctx->pc = 0x4EDFC0u;
label_4edfc0:
    // 0x4edfc0: 0x84820160  lh          $v0, 0x160($a0)
    ctx->pc = 0x4edfc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x4edfc4: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4EDFC4u;
    {
        const bool branch_taken_0x4edfc4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4edfc4) {
            ctx->pc = 0x4EDFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EDFC4u;
            // 0x4edfc8: 0x960201bc  lhu         $v0, 0x1BC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EDFE8u;
            goto label_4edfe8;
        }
    }
    ctx->pc = 0x4EDFCCu;
    // 0x4edfcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4edfccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4edfd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4edfd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4edfd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4edfd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4edfd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4edfd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4edfdc: 0x813bcb2  j           func_4EF2C8
    ctx->pc = 0x4EDFDCu;
    ctx->pc = 0x4EDFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EDFDCu;
    // 0x4edfe0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF2C8u;
    sub_004EF2C8_0x4ef2c8(rdram, ctx, runtime); return;
    ctx->pc = 0x4EDFE4u;
    // 0x4edfe4: 0x0  nop
    ctx->pc = 0x4edfe4u;
    // NOP
label_4edfe8:
    // 0x4edfe8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4edfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4edfec: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4edfecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4edff0: 0x2c43000d  sltiu       $v1, $v0, 0xD
    ctx->pc = 0x4edff0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x4edff4: 0x5060002f  beql        $v1, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x4EDFF4u;
    {
        const bool branch_taken_0x4edff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4edff4) {
            ctx->pc = 0x4EDFF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EDFF4u;
            // 0x4edff8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EE0B4u;
            return;
        }
    }
    ctx->pc = 0x4EDFFCu;
    // 0x4edffc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4edffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4ee000: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4ee000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4ee004: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ee004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ee008: 0x8c63bb70  lw          $v1, -0x4490($v1)
    ctx->pc = 0x4ee008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949744)));
    // 0x4ee00c: 0x600008  jr          $v1
    ctx->pc = 0x4EE00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4EE018u: goto label_4ee018;
            case 0x4EE028u: goto label_4ee028;
            case 0x4EE038u: goto label_4ee038;
            case 0x4EE048u: goto label_4ee048;
            case 0x4EE058u: goto label_4ee058;
            case 0x4EE068u: goto label_4ee068;
            case 0x4EE078u: goto label_4ee078;
            case 0x4EE088u: goto label_4ee088;
            case 0x4EE098u: goto label_4ee098;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EE00Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4EE014u;
    // 0x4ee014: 0x0  nop
    ctx->pc = 0x4ee014u;
    // NOP
label_4ee018:
    // 0x4ee018: 0xc13b832  jal         func_4EE0C8
    ctx->pc = 0x4EE018u;
    SET_GPR_U32(ctx, 31, 0x4EE020u);
    ctx->pc = 0x4EE01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE018u;
    // 0x4ee01c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EE0C8u, 0x4EE018u, 0x4EE020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EE020u;
label_4ee020:
    // 0x4ee020: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x4EE020u;
    {
        const bool branch_taken_0x4ee020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EE024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE020u;
        // 0x4ee024: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee020) {
            ctx->pc = 0x4EE0B4u;
            return;
        }
    }
    ctx->pc = 0x4EE028u;
label_4ee028:
    // 0x4ee028: 0xc13b85e  jal         func_4EE178
    ctx->pc = 0x4EE028u;
    SET_GPR_U32(ctx, 31, 0x4EE030u);
    ctx->pc = 0x4EE02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE028u;
    // 0x4ee02c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EE178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EE178u, 0x4EE028u, 0x4EE030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EE030u;
label_4ee030:
    // 0x4ee030: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x4EE030u;
    {
        const bool branch_taken_0x4ee030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EE034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE030u;
        // 0x4ee034: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee030) {
            ctx->pc = 0x4EE0B4u;
            return;
        }
    }
    ctx->pc = 0x4EE038u;
label_4ee038:
    // 0x4ee038: 0xc13b8b2  jal         func_4EE2C8
    ctx->pc = 0x4EE038u;
    SET_GPR_U32(ctx, 31, 0x4EE040u);
    ctx->pc = 0x4EE03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE038u;
    // 0x4ee03c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EE2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EE2C8u, 0x4EE038u, 0x4EE040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EE040u;
label_4ee040:
    // 0x4ee040: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x4EE040u;
    {
        const bool branch_taken_0x4ee040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EE044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE040u;
        // 0x4ee044: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee040) {
            ctx->pc = 0x4EE0B4u;
            return;
        }
    }
    ctx->pc = 0x4EE048u;
label_4ee048:
    // 0x4ee048: 0xc13b8d4  jal         func_4EE350
    ctx->pc = 0x4EE048u;
    SET_GPR_U32(ctx, 31, 0x4EE050u);
    ctx->pc = 0x4EE04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE048u;
    // 0x4ee04c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EE350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EE350u, 0x4EE048u, 0x4EE050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EE050u;
label_4ee050:
    // 0x4ee050: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x4EE050u;
    {
        const bool branch_taken_0x4ee050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EE054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE050u;
        // 0x4ee054: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee050) {
            ctx->pc = 0x4EE0B4u;
            return;
        }
    }
    ctx->pc = 0x4EE058u;
label_4ee058:
    // 0x4ee058: 0xc13b8e8  jal         func_4EE3A0
    ctx->pc = 0x4EE058u;
    SET_GPR_U32(ctx, 31, 0x4EE060u);
    ctx->pc = 0x4EE05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE058u;
    // 0x4ee05c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EE3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EE3A0u, 0x4EE058u, 0x4EE060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EE060u;
label_4ee060:
    // 0x4ee060: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4EE060u;
    {
        const bool branch_taken_0x4ee060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EE064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE060u;
        // 0x4ee064: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee060) {
            ctx->pc = 0x4EE0B4u;
            return;
        }
    }
    ctx->pc = 0x4EE068u;
label_4ee068:
    // 0x4ee068: 0xc13b930  jal         func_4EE4C0
    ctx->pc = 0x4EE068u;
    SET_GPR_U32(ctx, 31, 0x4EE070u);
    ctx->pc = 0x4EE06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE068u;
    // 0x4ee06c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EE4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EE4C0u, 0x4EE068u, 0x4EE070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EE070u;
label_4ee070:
    // 0x4ee070: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4EE070u;
    {
        const bool branch_taken_0x4ee070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EE074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE070u;
        // 0x4ee074: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee070) {
            ctx->pc = 0x4EE0B4u;
            return;
        }
    }
    ctx->pc = 0x4EE078u;
label_4ee078:
    // 0x4ee078: 0xc13b89e  jal         func_4EE278
    ctx->pc = 0x4EE078u;
    SET_GPR_U32(ctx, 31, 0x4EE080u);
    ctx->pc = 0x4EE07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE078u;
    // 0x4ee07c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EE278u, 0x4EE078u, 0x4EE080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EE080u;
label_4ee080:
    // 0x4ee080: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4EE080u;
    {
        const bool branch_taken_0x4ee080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EE084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE080u;
        // 0x4ee084: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee080) {
            ctx->pc = 0x4EE0B4u;
            return;
        }
    }
    ctx->pc = 0x4EE088u;
label_4ee088:
    // 0x4ee088: 0xc13b9a0  jal         func_4EE680
    ctx->pc = 0x4EE088u;
    SET_GPR_U32(ctx, 31, 0x4EE090u);
    ctx->pc = 0x4EE08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE088u;
    // 0x4ee08c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EE680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EE680u, 0x4EE088u, 0x4EE090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EE090u;
label_4ee090:
    // 0x4ee090: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4EE090u;
    {
        const bool branch_taken_0x4ee090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EE094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE090u;
        // 0x4ee094: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee090) {
            ctx->pc = 0x4EE0B4u;
            return;
        }
    }
    ctx->pc = 0x4EE098u;
label_4ee098:
    // 0x4ee098: 0xc13b9d6  jal         func_4EE758
    ctx->pc = 0x4EE098u;
    SET_GPR_U32(ctx, 31, 0x4EE0A0u);
    ctx->pc = 0x4EE09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE098u;
    // 0x4ee09c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EE758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EE758u, 0x4EE098u, 0x4EE0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EE0A0u;
label_4ee0a0:
    // 0x4ee0a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4EE0A0u;
    {
        const bool branch_taken_0x4ee0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EE0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE0A0u;
        // 0x4ee0a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee0a0) {
            ctx->pc = 0x4EE0B4u;
            return;
        }
    }
    ctx->pc = 0x4EE0A8u;
}
