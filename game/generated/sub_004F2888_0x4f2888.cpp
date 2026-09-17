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

// Function: sub_004F2888
// Address: 0x4f2888 - 0x4f2a40
void sub_004F2888_0x4f2888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F2888_0x4f2888");
#endif

    switch (ctx->pc) {
        case 0x4f28a8u: goto label_4f28a8;
        case 0x4f28c8u: goto label_4f28c8;
        case 0x4f2a18u: goto label_4f2a18;
        case 0x4f2a28u: goto label_4f2a28;
        default: break;
    }

    ctx->pc = 0x4f2888u;

    // 0x4f2888: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f2888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4f288c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f288cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f2890: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f2890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2894: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f2894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f2898: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4f2898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4f289c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4f289cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4f28a0: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4F28A0u;
    SET_GPR_U32(ctx, 31, 0x4F28A8u);
    ctx->pc = 0x4F28A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F28A0u;
    // 0x4f28a4: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4F28A0u, 0x4F28A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F28A8u;
label_4f28a8:
    // 0x4f28a8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4f28a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4f28ac: 0x2472122c  addiu       $s2, $v1, 0x122C
    ctx->pc = 0x4f28acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4652));
    // 0x4f28b0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4f28b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F122Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F122Cu, _value); } while (0);
    // 0x4f28b4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4f28b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f28b8: 0x4420023  bltzl       $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x4F28B8u;
    {
        const bool branch_taken_0x4f28b8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f28b8) {
            ctx->pc = 0x4F28BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F28B8u;
            // 0x4f28bc: 0x8e020140  lw          $v0, 0x140($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F2948u;
            goto label_4f2948;
        }
    }
    ctx->pc = 0x4F28C0u;
    // 0x4f28c0: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4F28C0u;
    SET_GPR_U32(ctx, 31, 0x4F28C8u);
    ctx->pc = 0x4F28C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F28C0u;
    // 0x4f28c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4F28C0u, 0x4F28C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F28C8u;
label_4f28c8:
    // 0x4f28c8: 0xa6000030  sh          $zero, 0x30($s0)
    ctx->pc = 0x4f28c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f28cc: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4f28ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4f28d0: 0x86020160  lh          $v0, 0x160($s0)
    ctx->pc = 0x4f28d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x4f28d4: 0x24841210  addiu       $a0, $a0, 0x1210
    ctx->pc = 0x4f28d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4624));
    // 0x4f28d8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4f28d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4f28dc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4f28dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1210u));
    // 0x4f28e0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4f28e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4f28e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f28e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f28e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f28e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f28ec: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4f28ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4f28f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f28f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f28f4: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4f28f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4f28f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4f28f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4f28fc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4f28fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4f2900: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f2900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f2904: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4f2904u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4f2908: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4f2908u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4f290c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f290cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f2910: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4f2910u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4f2914: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4f2914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4f2918: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x4f2918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x4f291c: 0x24218140  addiu       $at, $at, -0x7EC0
    ctx->pc = 0x4f291cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294934848));
    // 0x4f2920: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4f2920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4f2924: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4f2924u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f2928: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x4f2928u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f292c: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x4f292cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x4f2930: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4f2930u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f2934: 0xa6040162  sh          $a0, 0x162($s0)
    ctx->pc = 0x4f2934u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 4));
    // 0x4f2938: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4f2938u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f293c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4f293cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4f2940: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4f2940u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f2944: 0x8e020140  lw          $v0, 0x140($s0)
    ctx->pc = 0x4f2944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
label_4f2948:
    // 0x4f2948: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4f2948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4f294c: 0xac621228  sw          $v0, 0x1228($v1)
    ctx->pc = 0x4f294cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F1228u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1228u, _value); } while (0);
    // 0x4f2950: 0x844401b4  lh          $a0, 0x1B4($v0)
    ctx->pc = 0x4f2950u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 436)));
    // 0x4f2954: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4F2954u;
    {
        const bool branch_taken_0x4f2954 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x4F2958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2954u;
        // 0x4f2958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2954) {
            ctx->pc = 0x4F2978u;
            goto label_4f2978;
        }
    }
    ctx->pc = 0x4F295Cu;
    // 0x4f295c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f295cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f2960: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f2960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f2964: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f2964u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f2968: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4f2968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f296c: 0x813caae  j           func_4F2AB8
    ctx->pc = 0x4F296Cu;
    ctx->pc = 0x4F2970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F296Cu;
    // 0x4f2970: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F2AB8u;
    sub_004F2AB8_0x4f2ab8(rdram, ctx, runtime); return;
    ctx->pc = 0x4F2974u;
    // 0x4f2974: 0x0  nop
    ctx->pc = 0x4f2974u;
    // NOP
label_4f2978:
    // 0x4f2978: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4f2978u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4f297c: 0x8602001a  lh          $v0, 0x1A($s0)
    ctx->pc = 0x4f297cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x4f2980: 0x24a51210  addiu       $a1, $a1, 0x1210
    ctx->pc = 0x4f2980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4624));
    // 0x4f2984: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4f2984u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4f2988: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4f2988u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F1210u));
    // 0x4f298c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4f298cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4f2990: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x4f2990u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f2994: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f2994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f2998: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4f2998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f299c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4f299cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4f29a0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f29a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f29a4: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x4f29a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x4f29a8: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4f29a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f29ac: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4f29acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4f29b0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f29b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f29b4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4f29b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f29b8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4f29b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4f29bc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4f29bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4f29c0: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4f29c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4f29c4: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4f29c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f29c8: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x4f29c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x4f29cc: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4F29CCu;
    {
        const bool branch_taken_0x4f29cc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4f29cc) {
            ctx->pc = 0x4F29D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F29CCu;
            // 0x4f29d0: 0x960201bc  lhu         $v0, 0x1BC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F29F0u;
            goto label_4f29f0;
        }
    }
    ctx->pc = 0x4F29D4u;
    // 0x4f29d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f29d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f29d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f29d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f29dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f29dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f29e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f29e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f29e4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4f29e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f29e8: 0x813caae  j           func_4F2AB8
    ctx->pc = 0x4F29E8u;
    ctx->pc = 0x4F29ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F29E8u;
    // 0x4f29ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F2AB8u;
    sub_004F2AB8_0x4f2ab8(rdram, ctx, runtime); return;
    ctx->pc = 0x4F29F0u;
label_4f29f0:
    // 0x4f29f0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f29f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f29f4: 0x21c43  sra         $v1, $v0, 17
    ctx->pc = 0x4f29f4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4f29f8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F29F8u;
    {
        const bool branch_taken_0x4f29f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F29FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F29F8u;
        // 0x4f29fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f29f8) {
            ctx->pc = 0x4F2A10u;
            goto label_4f2a10;
        }
    }
    ctx->pc = 0x4F2A00u;
    // 0x4f2a00: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4F2A00u;
    {
        const bool branch_taken_0x4f2a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f2a00) {
            ctx->pc = 0x4F2A20u;
            goto label_4f2a20;
        }
    }
    ctx->pc = 0x4F2A08u;
    // 0x4f2a08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4F2A08u;
    {
        const bool branch_taken_0x4f2a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2A08u;
        // 0x4f2a0c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2a08) {
            ctx->pc = 0x4F2A2Cu;
            goto label_4f2a2c;
        }
    }
    ctx->pc = 0x4F2A10u;
label_4f2a10:
    // 0x4f2a10: 0xc13ca90  jal         func_4F2A40
    ctx->pc = 0x4F2A10u;
    SET_GPR_U32(ctx, 31, 0x4F2A18u);
    ctx->pc = 0x4F2A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F2A10u;
    // 0x4f2a14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F2A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F2A40u, 0x4F2A10u, 0x4F2A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F2A18u;
label_4f2a18:
    // 0x4f2a18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4F2A18u;
    {
        const bool branch_taken_0x4f2a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2A18u;
        // 0x4f2a1c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2a18) {
            ctx->pc = 0x4F2A2Cu;
            goto label_4f2a2c;
        }
    }
    ctx->pc = 0x4F2A20u;
label_4f2a20:
    // 0x4f2a20: 0xc13cab4  jal         func_4F2AD0
    ctx->pc = 0x4F2A20u;
    SET_GPR_U32(ctx, 31, 0x4F2A28u);
    ctx->pc = 0x4F2A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F2A20u;
    // 0x4f2a24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F2AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F2AD0u, 0x4F2A20u, 0x4F2A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F2A28u;
label_4f2a28:
    // 0x4f2a28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f2a28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f2a2c:
    // 0x4f2a2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f2a2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f2a30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f2a30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f2a34: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4f2a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f2a38: 0x3e00008  jr          $ra
    ctx->pc = 0x4F2A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F2A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2A38u;
        // 0x4f2a3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F2A40u;
}
