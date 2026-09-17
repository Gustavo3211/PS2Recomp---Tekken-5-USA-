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

// Function: sub_0050C510
// Address: 0x50c510 - 0x50ca48
void sub_0050C510_0x50c510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050C510_0x50c510");
#endif

    switch (ctx->pc) {
        case 0x50c53cu: goto label_50c53c;
        case 0x50c608u: goto label_50c608;
        case 0x50c6b8u: goto label_50c6b8;
        case 0x50c710u: goto label_50c710;
        case 0x50c758u: goto label_50c758;
        case 0x50c784u: goto label_50c784;
        case 0x50c804u: goto label_50c804;
        case 0x50c8c0u: goto label_50c8c0;
        case 0x50c8f0u: goto label_50c8f0;
        case 0x50c920u: goto label_50c920;
        default: break;
    }

    ctx->pc = 0x50c510u;

label_50c510:
    // 0x50c510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x50c510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x50c514: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x50c514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x50c518: 0x3c10008f  lui         $s0, 0x8F
    ctx->pc = 0x50c518u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)143 << 16));
    // 0x50c51c: 0x2610c638  addiu       $s0, $s0, -0x39C8
    ctx->pc = 0x50c51cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952504));
    // 0x50c520: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x50c520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x50c524: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x50c524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x50c528: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x50c528u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x50c52c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x50c52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x50c530: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x50c530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x50c534: 0xc143292  jal         func_50CA48
    ctx->pc = 0x50C534u;
    SET_GPR_U32(ctx, 31, 0x50C53Cu);
    ctx->pc = 0x50C538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50C534u;
    // 0x50c538: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50CA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50CA48u, 0x50C534u, 0x50C53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50C53Cu;
label_50c53c:
    // 0x50c53c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x50c53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50c540: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x50c540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x50c544: 0x3c11008f  lui         $s1, 0x8F
    ctx->pc = 0x50c544u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)143 << 16));
    // 0x50c548: 0x3c050090  lui         $a1, 0x90
    ctx->pc = 0x50c548u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)144 << 16));
    // 0x50c54c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50c54cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50c550: 0x2631c63c  addiu       $s1, $s1, -0x39C4
    ctx->pc = 0x50c550u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952508));
    // 0x50c554: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50c554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50c558: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50c558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x50c55c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50c55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50c560: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50c560u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50c564: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50c564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50c568: 0x21483  sra         $v0, $v0, 18
    ctx->pc = 0x50c568u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 18));
    // 0x50c56c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x50c56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x50c570: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50c570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50c574: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50c574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x50c578: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50c578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50c57c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50c57cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50c580: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x50c580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x50c584: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x50c584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x50c588: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50c588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50c58c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50c58cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x50c590: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50c590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50c594: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x50c594u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50c598: 0x2442e001  addiu       $v0, $v0, -0x1FFF
    ctx->pc = 0x50c598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959105));
    // 0x50c59c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x50c59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x50c5a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50c5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50c5a4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50c5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x50c5a8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50c5a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50c5ac: 0xa6620002  sh          $v0, 0x2($s3)
    ctx->pc = 0x50c5acu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x50c5b0: 0x84a4f084  lh          $a0, -0xF7C($a1)
    ctx->pc = 0x50c5b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294963332)));
    // 0x50c5b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x50c5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50c5b8: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x50c5b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x50c5bc: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x50c5bcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50c5c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50c5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50c5c4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x50c5c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x50c5c8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x50c5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x50c5cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50c5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50c5d0: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x50c5d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50c5d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x50c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x50c5d8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x50c5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x50c5dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50c5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50c5e0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x50c5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x50c5e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50c5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50c5e8: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x50c5e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50c5ec: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x50c5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x50c5f0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50c5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50c5f4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50c5f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50c5f8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x50c5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x50c5fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50c5fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50c600: 0xc143292  jal         func_50CA48
    ctx->pc = 0x50C600u;
    SET_GPR_U32(ctx, 31, 0x50C608u);
    ctx->pc = 0x50C604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50C600u;
    // 0x50c604: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50CA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50CA48u, 0x50C600u, 0x50C608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50C608u;
label_50c608:
    // 0x50c608: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x50c608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50c60c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x50c60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x50c610: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x50c610u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50c614: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50c614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50c618: 0x24057fff  addiu       $a1, $zero, 0x7FFF
    ctx->pc = 0x50c618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x50c61c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50c61cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50c620: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x50c620u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50c624: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50c624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x50c628: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50c628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50c62c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x50c62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50c630: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50c630u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50c634: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x50c634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x50c638: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50c638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50c63c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50c63cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50c640: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x50c640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x50c644: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50c644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50c648: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50c648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x50c64c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50c64cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50c650: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50c650u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50c654: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50c654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50c658: 0x21483  sra         $v0, $v0, 18
    ctx->pc = 0x50c658u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 18));
    // 0x50c65c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x50c65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x50c660: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50c660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50c664: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50c664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x50c668: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50c668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50c66c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50c66cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50c670: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x50c670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x50c674: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x50c674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x50c678: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50c678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50c67c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50c67cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x50c680: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50c680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50c684: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x50c684u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50c688: 0x2442e001  addiu       $v0, $v0, -0x1FFF
    ctx->pc = 0x50c688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959105));
    // 0x50c68c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x50c68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x50c690: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x50c690u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50c694: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50c694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50c698: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50c698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x50c69c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50c69cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50c6a0: 0xa6650006  sh          $a1, 0x6($s3)
    ctx->pc = 0x50c6a0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x50c6a4: 0xa6620004  sh          $v0, 0x4($s3)
    ctx->pc = 0x50c6a4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x50c6a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x50c6a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50c6ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x50c6acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50c6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x50C6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50C6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50C6B0u;
        // 0x50c6b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50C6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50C6B8u;
label_50c6b8:
    // 0x50c6b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x50c6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x50c6bc: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x50c6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x50c6c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x50c6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x50c6c4: 0x2443f080  addiu       $v1, $v0, -0xF80
    ctx->pc = 0x50c6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x50c6c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x50c6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x50c6cc: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50c6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50c6d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x50c6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x50c6d4: 0x2450c630  addiu       $s0, $v0, -0x39D0
    ctx->pc = 0x50c6d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952496));
    // 0x50c6d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x50c6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x50c6dc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x50c6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x50c6e0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x50c6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x50c6e4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x50c6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x50c6e8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x50c6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x50c6ec: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x50c6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x50c6f0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x50c6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x50c6f4: 0x8c650050  lw          $a1, 0x50($v1)
    ctx->pc = 0x50c6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8FF0D0u));
    // 0x50c6f8: 0x8c640054  lw          $a0, 0x54($v1)
    ctx->pc = 0x50c6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8FF0D4u));
    // 0x50c6fc: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x50c6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x50c700: 0xac65c62c  sw          $a1, -0x39D4($v1)
    ctx->pc = 0x50c700u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x8EC62Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC62Cu, _value); } while (0);
    // 0x50c704: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x50c704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x50c708: 0xc124620  jal         func_491880
    ctx->pc = 0x50C708u;
    SET_GPR_U32(ctx, 31, 0x50C710u);
    ctx->pc = 0x50C70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50C708u;
    // 0x50c70c: 0xaca4c634  sw          $a0, -0x39CC($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294952500), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x50C708u, 0x50C710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50C710u;
label_50c710:
    // 0x50c710: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x50c710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x50c714: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x50c714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x50c718: 0x2465c64c  addiu       $a1, $v1, -0x39B4
    ctx->pc = 0x50c718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952524));
    // 0x50c71c: 0x3484003f  ori         $a0, $a0, 0x3F
    ctx->pc = 0x50c71cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63);
    // 0x50c720: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x50c720u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC64Cu));
    // 0x50c724: 0x34019800  ori         $at, $zero, 0x9800
    ctx->pc = 0x50c724u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38912);
    // 0x50c728: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x50c728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x50c72c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x50c72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x50c730: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50c730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50c734: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x50c734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x50c738: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x50c738u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x50c73c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x50c73cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50c740: 0x44000ad  bltz        $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x50C740u;
    {
        const bool branch_taken_0x50c740 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x50C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50C740u;
        // 0x50c744: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50c740) {
            ctx->pc = 0x50C9F8u;
            goto label_50c9f8;
        }
    }
    ctx->pc = 0x50C748u;
    // 0x50c748: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x50c748u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50c74c: 0x241e0010  addiu       $fp, $zero, 0x10
    ctx->pc = 0x50c74cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x50c750: 0x8ec80000  lw          $t0, 0x0($s6)
    ctx->pc = 0x50c750u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x50c754: 0x0  nop
    ctx->pc = 0x50c754u;
    // NOP
label_50c758:
    // 0x50c758: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x50c758u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x50c75c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x50C75Cu;
    {
        const bool branch_taken_0x50c75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x50C760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50C75Cu;
        // 0x50c760: 0x95030000  lhu         $v1, 0x0($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50c75c) {
            ctx->pc = 0x50C790u;
            goto label_50c790;
        }
    }
    ctx->pc = 0x50C764u;
    // 0x50c764: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x50c764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x50c768: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x50c768u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50c76c: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x50c76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x50c770: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x50c770u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50c774: 0x54400093  bnel        $v0, $zero, . + 4 + (0x93 << 2)
    ctx->pc = 0x50C774u;
    {
        const bool branch_taken_0x50c774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x50c774) {
            ctx->pc = 0x50C778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x50C774u;
            // 0x50c778: 0x86e20000  lh          $v0, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x50C9C4u;
            goto label_50c9c4;
        }
    }
    ctx->pc = 0x50C77Cu;
    // 0x50c77c: 0xc143144  jal         func_50C510
    ctx->pc = 0x50C77Cu;
    SET_GPR_U32(ctx, 31, 0x50C784u);
    ctx->pc = 0x50C510u;
    goto label_50c510;
    ctx->pc = 0x50C784u;
label_50c784:
    // 0x50c784: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x50C784u;
    {
        const bool branch_taken_0x50c784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50C784u;
        // 0x50c788: 0x86e20000  lh          $v0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50c784) {
            ctx->pc = 0x50C9C4u;
            goto label_50c9c4;
        }
    }
    ctx->pc = 0x50C78Cu;
    // 0x50c78c: 0x0  nop
    ctx->pc = 0x50c78cu;
    // NOP
label_50c790:
    // 0x50c790: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50c790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50c794: 0x85040002  lh          $a0, 0x2($t0)
    ctx->pc = 0x50c794u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x50c798: 0x2455c640  addiu       $s5, $v0, -0x39C0
    ctx->pc = 0x50c798u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952512));
    // 0x50c79c: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x50c79cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x50c7a0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x50c7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EC640u));
    // 0x50c7a4: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x50c7a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x50c7a8: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x50c7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x50c7ac: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x50c7acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x50c7b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50c7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50c7b4: 0x2474c644  addiu       $s4, $v1, -0x39BC
    ctx->pc = 0x50c7b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952516));
    // 0x50c7b8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x50c7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x50c7bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x50c7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50c7c0: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x50c7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x50c7c4: 0x24b3c648  addiu       $s3, $a1, -0x39B8
    ctx->pc = 0x50c7c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952520));
    // 0x50c7c8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x50c7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x50c7cc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x50c7ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50c7d0: 0x85020004  lh          $v0, 0x4($t0)
    ctx->pc = 0x50c7d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x50c7d4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x50c7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50c7d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50c7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50c7dc: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x50c7dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x50c7e0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x50c7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x50c7e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50c7e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50c7e8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x50c7e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x50c7ec: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x50c7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x50c7f0: 0x85020006  lh          $v0, 0x6($t0)
    ctx->pc = 0x50c7f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x50c7f4: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x50c7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x50c7f8: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x50c7f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x50c7fc: 0xc1413da  jal         func_504F68
    ctx->pc = 0x50C7FCu;
    SET_GPR_U32(ctx, 31, 0x50C804u);
    ctx->pc = 0x50C800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50C7FCu;
    // 0x50c800: 0xae670000  sw          $a3, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x504F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x504F68u, 0x50C7FCu, 0x50C804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50C804u;
label_50c804:
    // 0x50c804: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x50C804u;
    {
        const bool branch_taken_0x50c804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x50C808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50C804u;
        // 0x50c808: 0x3c03008f  lui         $v1, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50c804) {
            ctx->pc = 0x50C8B8u;
            goto label_50c8b8;
        }
    }
    ctx->pc = 0x50C80Cu;
    // 0x50c80c: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x50c80cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x50c810: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x50c810u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x50c814: 0x2470c638  addiu       $s0, $v1, -0x39C8
    ctx->pc = 0x50c814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952504));
    // 0x50c818: 0x24420176  addiu       $v0, $v0, 0x176
    ctx->pc = 0x50c818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 374));
    // 0x50c81c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x50c81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50c820: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x50c820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x50c824: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x50c824u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x50c828: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x50c828u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x50c82c: 0x922024  and         $a0, $a0, $s2
    ctx->pc = 0x50c82cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 18));
    // 0x50c830: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x50c830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x50c834: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x50c834u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x50c838: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x50c838u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x50c83c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x50c83cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x50c840: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x50c840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x50c844: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x50c844u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x50c848: 0x24630110  addiu       $v1, $v1, 0x110
    ctx->pc = 0x50c848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x50c84c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x50c84cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x50c850: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x50c850u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50c854: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x50c854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x50c858: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x50c858u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x50c85c: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x50c85cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
    // 0x50c860: 0x2442ff6a  addiu       $v0, $v0, -0x96
    ctx->pc = 0x50c860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967146));
    // 0x50c864: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x50c864u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x50c868: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x50c868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x50c86c: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x50c86cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x50c870: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50c870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x50c874: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x50c874u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50c878: 0x284201c0  slti        $v0, $v0, 0x1C0
    ctx->pc = 0x50c878u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)448) ? 1 : 0);
    // 0x50c87c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x50C87Cu;
    {
        const bool branch_taken_0x50c87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x50C880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50C87Cu;
        // 0x50c880: 0x721824  and         $v1, $v1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50c87c) {
            ctx->pc = 0x50C8B8u;
            goto label_50c8b8;
        }
    }
    ctx->pc = 0x50C884u;
    // 0x50c884: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x50c884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x50c888: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x50c888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x50c88c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50c88cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x50c890: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50c890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50c894: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x50c894u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50c898: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x50c898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x50c89c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x50c89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x50c8a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50c8a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50c8a4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50c8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x50c8a8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x50c8a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50c8ac: 0x284201c0  slti        $v0, $v0, 0x1C0
    ctx->pc = 0x50c8acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)448) ? 1 : 0);
    // 0x50c8b0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x50C8B0u;
    {
        const bool branch_taken_0x50c8b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x50c8b0) {
            ctx->pc = 0x50C8B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x50C8B0u;
            // 0x50c8b4: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x50C8C8u;
            goto label_50c8c8;
        }
    }
    ctx->pc = 0x50C8B8u;
label_50c8b8:
    // 0x50c8b8: 0xc143144  jal         func_50C510
    ctx->pc = 0x50C8B8u;
    SET_GPR_U32(ctx, 31, 0x50C8C0u);
    ctx->pc = 0x50C8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50C8B8u;
    // 0x50c8bc: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50C510u;
    goto label_50c510;
    ctx->pc = 0x50C8C0u;
label_50c8c0:
    // 0x50c8c0: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x50C8C0u;
    {
        const bool branch_taken_0x50c8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50C8C0u;
        // 0x50c8c4: 0x86e20000  lh          $v0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50c8c0) {
            ctx->pc = 0x50C9C4u;
            goto label_50c9c4;
        }
    }
    ctx->pc = 0x50C8C8u;
label_50c8c8:
    // 0x50c8c8: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x50c8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x50c8cc: 0x2471c634  addiu       $s1, $v1, -0x39CC
    ctx->pc = 0x50c8ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952500));
    // 0x50c8d0: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x50c8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x50c8d4: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x50c8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x50c8d8: 0x24a4c62c  addiu       $a0, $a1, -0x39D4
    ctx->pc = 0x50c8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952492));
    // 0x50c8dc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x50c8dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x50c8e0: 0x2463ff00  addiu       $v1, $v1, -0x100
    ctx->pc = 0x50c8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967040));
    // 0x50c8e4: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x50c8e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x50c8e8: 0xc14481c  jal         func_512070
    ctx->pc = 0x50C8E8u;
    SET_GPR_U32(ctx, 31, 0x50C8F0u);
    ctx->pc = 0x50C8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50C8E8u;
    // 0x50c8ec: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512070u, 0x50C8E8u, 0x50C8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50C8F0u;
label_50c8f0:
    // 0x50c8f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x50c8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x50c8f4: 0x54430033  bnel        $v0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x50C8F4u;
    {
        const bool branch_taken_0x50c8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x50c8f4) {
            ctx->pc = 0x50C8F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x50C8F4u;
            // 0x50c8f8: 0x86e20000  lh          $v0, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x50C9C4u;
            goto label_50c9c4;
        }
    }
    ctx->pc = 0x50C8FCu;
    // 0x50c8fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x50c8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50c900: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x50c900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x50c904: 0x34630223  ori         $v1, $v1, 0x223
    ctx->pc = 0x50c904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)547);
    // 0x50c908: 0x86650000  lh          $a1, 0x0($s3)
    ctx->pc = 0x50c908u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x50c90c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50c90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50c910: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x50c910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x50c914: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x50c914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x50c918: 0xc13e3fc  jal         func_4F8FF0
    ctx->pc = 0x50C918u;
    SET_GPR_U32(ctx, 31, 0x50C920u);
    ctx->pc = 0x50C91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50C918u;
    // 0x50c91c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F8FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F8FF0u, 0x50C918u, 0x50C920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50C920u;
label_50c920:
    // 0x50c920: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x50c920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x50c924: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x50c924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x50c928: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x50c928u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50c92c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50c92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50c930: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x50c930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50c934: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50c934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50c938: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x50c938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50c93c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x50c93cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x50c940: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50c940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50c944: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x50c944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x50c948: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x50c948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x50c94c: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x50c94cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x50c950: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x50c950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x50c954: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x50c954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x50c958: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50c958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50c95c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x50c95cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x50c960: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x50c960u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x50c964: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x50c964u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x50c968: 0xb22825  or          $a1, $a1, $s2
    ctx->pc = 0x50c968u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    // 0x50c96c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x50c96cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x50c970: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x50c970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x50c974: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50c974u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50c978: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x50c978u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50c97c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x50c97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50c980: 0xa4600002  sh          $zero, 0x2($v1)
    ctx->pc = 0x50c980u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x50c984: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x50c984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50c988: 0x96a40000  lhu         $a0, 0x0($s5)
    ctx->pc = 0x50c988u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x50c98c: 0xa4440004  sh          $a0, 0x4($v0)
    ctx->pc = 0x50c98cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x50c990: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x50c990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50c994: 0x96850000  lhu         $a1, 0x0($s4)
    ctx->pc = 0x50c994u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x50c998: 0xa4450006  sh          $a1, 0x6($v0)
    ctx->pc = 0x50c998u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x50c99c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x50c99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50c9a0: 0xa47e0008  sh          $fp, 0x8($v1)
    ctx->pc = 0x50c9a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 30));
    // 0x50c9a4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x50c9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50c9a8: 0xa45e000a  sh          $fp, 0xA($v0)
    ctx->pc = 0x50c9a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 30));
    // 0x50c9ac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x50c9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50c9b0: 0xa467000c  sh          $a3, 0xC($v1)
    ctx->pc = 0x50c9b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 7));
    // 0x50c9b4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x50c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50c9b8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x50c9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x50c9bc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x50c9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x50c9c0: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x50c9c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
label_50c9c4:
    // 0x50c9c4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x50c9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x50c9c8: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x50c9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x50c9cc: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x50c9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x50c9d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x50c9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x50c9d4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x50c9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x50c9d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50c9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50c9dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50c9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50c9e0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x50c9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x50c9e4: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x50c9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x50c9e8: 0xaec40000  sw          $a0, 0x0($s6)
    ctx->pc = 0x50c9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 4));
    // 0x50c9ec: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x50c9ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x50c9f0: 0x443ff59  bgezl       $v0, . + 4 + (-0xA7 << 2)
    ctx->pc = 0x50C9F0u;
    {
        const bool branch_taken_0x50c9f0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x50c9f0) {
            ctx->pc = 0x50C9F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x50C9F0u;
            // 0x50c9f4: 0x8ec80000  lw          $t0, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x50C758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50c758;
        }
    }
    ctx->pc = 0x50C9F8u;
label_50c9f8:
    // 0x50c9f8: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x50c9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x50c9fc: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x50c9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x50ca00: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x50ca00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x50ca04: 0x8c62c634  lw          $v0, -0x39CC($v1)
    ctx->pc = 0x50ca04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EC634u));
    // 0x50ca08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x50ca08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50ca0c: 0x2483f080  addiu       $v1, $a0, -0xF80
    ctx->pc = 0x50ca0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963328));
    // 0x50ca10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x50ca10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50ca14: 0x8ca4c62c  lw          $a0, -0x39D4($a1)
    ctx->pc = 0x50ca14u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EC62Cu));
    // 0x50ca18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x50ca18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50ca1c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x50ca1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50ca20: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x50ca20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50ca24: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x50ca24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x50ca28: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x50ca28u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x50ca2c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x50ca2cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x50ca30: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x50ca30u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x50ca34: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x50ca34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x50ca38: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x50ca38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8FF0D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8FF0D4u, _value); } while (0);
    // 0x50ca3c: 0xac640050  sw          $a0, 0x50($v1)
    ctx->pc = 0x50ca3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8FF0D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8FF0D0u, _value); } while (0);
    // 0x50ca40: 0x3e00008  jr          $ra
    ctx->pc = 0x50CA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50CA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50CA40u;
        // 0x50ca44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50CA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50CA48u;
}
