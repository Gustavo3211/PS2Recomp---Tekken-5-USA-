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

// Function: sub_00512F60
// Address: 0x512f60 - 0x513168
void sub_00512F60_0x512f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00512F60_0x512f60");
#endif

    switch (ctx->pc) {
        case 0x512f80u: goto label_512f80;
        case 0x512fb0u: goto label_512fb0;
        case 0x51301cu: goto label_51301c;
        case 0x513028u: goto label_513028;
        case 0x513108u: goto label_513108;
        case 0x513128u: goto label_513128;
        case 0x513148u: goto label_513148;
        default: break;
    }

    ctx->pc = 0x512f60u;

    // 0x512f60: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x512f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x512f64: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x512f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x512f68: 0x2442f650  addiu       $v0, $v0, -0x9B0
    ctx->pc = 0x512f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964816));
    // 0x512f6c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x512f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x512f70: 0xa443040e  sh          $v1, 0x40E($v0)
    ctx->pc = 0x512f70u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7DFA5Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7DFA5Eu, _value); } while (0);
    // 0x512f74: 0x3e00008  jr          $ra
    ctx->pc = 0x512F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512F74u;
        // 0x512f78: 0xa444040c  sh          $a0, 0x40C($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 1036), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x512F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x512F7Cu;
    // 0x512f7c: 0x0  nop
    ctx->pc = 0x512f7cu;
    // NOP
label_512f80:
    // 0x512f80: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x512f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x512f84: 0x84433d5a  lh          $v1, 0x3D5A($v0)
    ctx->pc = 0x512f84u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x903D5Au));
    // 0x512f88: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x512F88u;
    {
        const bool branch_taken_0x512f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x512F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512F88u;
        // 0x512f8c: 0x3c02007e  lui         $v0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x512f88) {
            ctx->pc = 0x512FA4u;
            goto label_512fa4;
        }
    }
    ctx->pc = 0x512F90u;
    // 0x512f90: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x512f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x512f94: 0x2442f650  addiu       $v0, $v0, -0x9B0
    ctx->pc = 0x512f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964816));
    // 0x512f98: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x512f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x512f9c: 0xa443040e  sh          $v1, 0x40E($v0)
    ctx->pc = 0x512f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1038), (uint16_t)GPR_U32(ctx, 3));
    // 0x512fa0: 0xa444040c  sh          $a0, 0x40C($v0)
    ctx->pc = 0x512fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1036), (uint16_t)GPR_U32(ctx, 4));
label_512fa4:
    // 0x512fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x512FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x512FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x512FACu;
    // 0x512fac: 0x0  nop
    ctx->pc = 0x512facu;
    // NOP
label_512fb0:
    // 0x512fb0: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x512fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x512fb4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x512fb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x512fb8: 0x84433d5a  lh          $v1, 0x3D5A($v0)
    ctx->pc = 0x512fb8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x903D5Au));
    // 0x512fbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x512fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x512fc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x512fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x512fc4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x512fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x512fc8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x512fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x512fcc: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x512FCCu;
    {
        const bool branch_taken_0x512fcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x512FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512FCCu;
        // 0x512fd0: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x512fcc) {
            ctx->pc = 0x5130ECu;
            goto label_5130ec;
        }
    }
    ctx->pc = 0x512FD4u;
    // 0x512fd4: 0x3c100090  lui         $s0, 0x90
    ctx->pc = 0x512fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)144 << 16));
    // 0x512fd8: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x512fd8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x512fdc: 0x2610f040  addiu       $s0, $s0, -0xFC0
    ctx->pc = 0x512fdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963264));
    // 0x512fe0: 0x3c130090  lui         $s3, 0x90
    ctx->pc = 0x512fe0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)144 << 16));
    // 0x512fe4: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x512fe4u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x8FF040u));
    // 0x512fe8: 0x2671f044  addiu       $s1, $s3, -0xFBC
    ctx->pc = 0x512fe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963268));
    // 0x512fec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x512fecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8FF040u));
    // 0x512ff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x512ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x512ff4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x512ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x512ff8: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x512ff8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x512ffc: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x512ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x513000: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x513000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x513004: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x513004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x513008: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x513008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x51300c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x51300cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x513010: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x513010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x513014: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x513014u;
    SET_GPR_U32(ctx, 31, 0x51301Cu);
    ctx->pc = 0x513018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513014u;
    // 0x513018: 0xa6250000  sh          $a1, 0x0($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x513014u, 0x51301Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x51301Cu;
label_51301c:
    // 0x51301c: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x51301cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x513020: 0xc13e3fc  jal         func_4F8FF0
    ctx->pc = 0x513020u;
    SET_GPR_U32(ctx, 31, 0x513028u);
    ctx->pc = 0x513024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513020u;
    // 0x513024: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F8FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F8FF0u, 0x513020u, 0x513028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513028u;
label_513028:
    // 0x513028: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x513028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x51302c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x51302cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x513030: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x513030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x513034: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x513034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x513038: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x513038u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x51303c: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x51303cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x513040: 0x23842  srl         $a3, $v0, 1
    ctx->pc = 0x513040u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x513044: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x513044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x513048: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x513048u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x51304c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x51304cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x513050: 0x2ce60008  sltiu       $a2, $a3, 0x8
    ctx->pc = 0x513050u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x513054: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x513054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x513058: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x513058u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x51305c: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x51305cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x513060: 0x250821  addu        $at, $at, $a1
    ctx->pc = 0x513060u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x513064: 0xa422f650  sh          $v0, -0x9B0($at)
    ctx->pc = 0x513064u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294964816), (uint16_t)GPR_U32(ctx, 2));
    // 0x513068: 0x10c00020  beqz        $a2, . + 4 + (0x20 << 2)
    ctx->pc = 0x513068u;
    {
        const bool branch_taken_0x513068 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x51306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513068u;
        // 0x51306c: 0x3c04007e  lui         $a0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513068) {
            ctx->pc = 0x5130ECu;
            goto label_5130ec;
        }
    }
    ctx->pc = 0x513070u;
    // 0x513070: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x513070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x513074: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x513074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x513078: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x513078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x51307c: 0x8c63d510  lw          $v1, -0x2AF0($v1)
    ctx->pc = 0x51307cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956304)));
    // 0x513080: 0x600008  jr          $v1
    ctx->pc = 0x513080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x513088u: goto label_513088;
            case 0x513098u: goto label_513098;
            case 0x5130A8u: goto label_5130a8;
            case 0x5130B8u: goto label_5130b8;
            case 0x5130D8u: goto label_5130d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x513080u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x513088u;
label_513088:
    // 0x513088: 0x8662f044  lh          $v0, -0xFBC($s3)
    ctx->pc = 0x513088u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294963268)));
    // 0x51308c: 0x2483f650  addiu       $v1, $a0, -0x9B0
    ctx->pc = 0x51308cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964816));
    // 0x513090: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x513090u;
    {
        const bool branch_taken_0x513090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x513094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513090u;
        // 0x513094: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513090) {
            ctx->pc = 0x5130C4u;
            goto label_5130c4;
        }
    }
    ctx->pc = 0x513098u;
label_513098:
    // 0x513098: 0x8662f044  lh          $v0, -0xFBC($s3)
    ctx->pc = 0x513098u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294963268)));
    // 0x51309c: 0x2483f650  addiu       $v1, $a0, -0x9B0
    ctx->pc = 0x51309cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964816));
    // 0x5130a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x5130A0u;
    {
        const bool branch_taken_0x5130a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5130A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5130A0u;
        // 0x5130a4: 0x24040082  addiu       $a0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5130a0) {
            ctx->pc = 0x5130C4u;
            goto label_5130c4;
        }
    }
    ctx->pc = 0x5130A8u;
label_5130a8:
    // 0x5130a8: 0x8662f044  lh          $v0, -0xFBC($s3)
    ctx->pc = 0x5130a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294963268)));
    // 0x5130ac: 0x2483f650  addiu       $v1, $a0, -0x9B0
    ctx->pc = 0x5130acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964816));
    // 0x5130b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x5130B0u;
    {
        const bool branch_taken_0x5130b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5130B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5130B0u;
        // 0x5130b4: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5130b0) {
            ctx->pc = 0x5130C4u;
            goto label_5130c4;
        }
    }
    ctx->pc = 0x5130B8u;
label_5130b8:
    // 0x5130b8: 0x8662f044  lh          $v0, -0xFBC($s3)
    ctx->pc = 0x5130b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294963268)));
    // 0x5130bc: 0x2483f650  addiu       $v1, $a0, -0x9B0
    ctx->pc = 0x5130bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964816));
    // 0x5130c0: 0x24040081  addiu       $a0, $zero, 0x81
    ctx->pc = 0x5130c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
label_5130c4:
    // 0x5130c4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x5130c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x5130c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x5130c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x5130cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x5130CCu;
    {
        const bool branch_taken_0x5130cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5130D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5130CCu;
        // 0x5130d0: 0xa4440002  sh          $a0, 0x2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5130cc) {
            ctx->pc = 0x5130ECu;
            goto label_5130ec;
        }
    }
    ctx->pc = 0x5130D4u;
    // 0x5130d4: 0x0  nop
    ctx->pc = 0x5130d4u;
    // NOP
label_5130d8:
    // 0x5130d8: 0x8662f044  lh          $v0, -0xFBC($s3)
    ctx->pc = 0x5130d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294963268)));
    // 0x5130dc: 0x2483f650  addiu       $v1, $a0, -0x9B0
    ctx->pc = 0x5130dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964816));
    // 0x5130e0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x5130e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x5130e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x5130e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x5130e8: 0xa4400002  sh          $zero, 0x2($v0)
    ctx->pc = 0x5130e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
label_5130ec:
    // 0x5130ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x5130ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5130f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x5130f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5130f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x5130f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5130f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x5130f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x5130fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5130fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x513100: 0x3e00008  jr          $ra
    ctx->pc = 0x513100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x513104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513100u;
        // 0x513104: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x513100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x513108u;
label_513108:
    // 0x513108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x513108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x51310c: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x51310cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x513110: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x513110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x513114: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x513114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x513118: 0xa462f044  sh          $v0, -0xFBC($v1)
    ctx->pc = 0x513118u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8FF044u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8FF044u, _value); } while (0);
    // 0x51311c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x51311cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x513120: 0x8144bec  j           func_512FB0
    ctx->pc = 0x513120u;
    ctx->pc = 0x513124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513120u;
    // 0x513124: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512FB0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_512fb0;
    ctx->pc = 0x513128u;
label_513128:
    // 0x513128: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x513128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x51312c: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x51312cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x513130: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x513130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x513134: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x513134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x513138: 0xa462f044  sh          $v0, -0xFBC($v1)
    ctx->pc = 0x513138u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8FF044u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8FF044u, _value); } while (0);
    // 0x51313c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x51313cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x513140: 0x8144bec  j           func_512FB0
    ctx->pc = 0x513140u;
    ctx->pc = 0x513144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513140u;
    // 0x513144: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512FB0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_512fb0;
    ctx->pc = 0x513148u;
label_513148:
    // 0x513148: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x513148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x51314c: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x51314cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x513150: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x513150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x513154: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x513154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x513158: 0xa462f044  sh          $v0, -0xFBC($v1)
    ctx->pc = 0x513158u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8FF044u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8FF044u, _value); } while (0);
    // 0x51315c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x51315cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x513160: 0x8144bec  j           func_512FB0
    ctx->pc = 0x513160u;
    ctx->pc = 0x513164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513160u;
    // 0x513164: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512FB0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_512fb0;
    ctx->pc = 0x513168u;
}
