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

// Function: sub_004A45B8
// Address: 0x4a45b8 - 0x4a4678
void sub_004A45B8_0x4a45b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A45B8_0x4a45b8");
#endif

    switch (ctx->pc) {
        case 0x4a45d4u: goto label_4a45d4;
        case 0x4a4604u: goto label_4a4604;
        case 0x4a4664u: goto label_4a4664;
        default: break;
    }

    ctx->pc = 0x4a45b8u;

    // 0x4a45b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a45b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a45bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a45bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4a45c0: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x4a45c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x4a45c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4a45c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4a45c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a45c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4a45cc: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4A45CCu;
    SET_GPR_U32(ctx, 31, 0x4A45D4u);
    ctx->pc = 0x4A45D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A45CCu;
    // 0x4a45d0: 0x2610d680  addiu       $s0, $s0, -0x2980 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4A45CCu, 0x4A45D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A45D4u;
label_4a45d4:
    // 0x4a45d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4a45d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a45d8: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x4a45d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x4a45dc: 0x244288e8  addiu       $v0, $v0, -0x7718
    ctx->pc = 0x4a45dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936808));
    // 0x4a45e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4a45e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4a45e4: 0x22402  srl         $a0, $v0, 16
    ctx->pc = 0x4a45e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4a45e8: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x4a45e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a45ec: 0xa604000e  sh          $a0, 0xE($s0)
    ctx->pc = 0x4a45ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a45f0: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x4a45f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a45f4: 0xa600000a  sh          $zero, 0xA($s0)
    ctx->pc = 0x4a45f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a45f8: 0xa6000016  sh          $zero, 0x16($s0)
    ctx->pc = 0x4a45f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a45fc: 0xc124620  jal         func_491880
    ctx->pc = 0x4A45FCu;
    SET_GPR_U32(ctx, 31, 0x4A4604u);
    ctx->pc = 0x4A4600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A45FCu;
    // 0x4a4600: 0xa6000014  sh          $zero, 0x14($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x4A45FCu, 0x4A4604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4604u;
label_4a4604:
    // 0x4a4604: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x4a4604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x4a4608: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x4a4608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x4a460c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x4a460cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4a4610: 0xa420e820  sh          $zero, -0x17E0($at)
    ctx->pc = 0x4a4610u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961184), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a4614: 0x26260008  addiu       $a2, $s1, 0x8
    ctx->pc = 0x4a4614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x4a4618: 0xa600220e  sh          $zero, 0x220E($s0)
    ctx->pc = 0x4a4618u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8718), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a461c: 0x24047fff  addiu       $a0, $zero, 0x7FFF
    ctx->pc = 0x4a461cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x4a4620: 0xa600220c  sh          $zero, 0x220C($s0)
    ctx->pc = 0x4a4620u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8716), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a4624: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4a4624u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a4628: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4a4628u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4a462c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4a462cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a4630: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4a4630u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4a4634: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4a4634u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a4638: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4a4638u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4a463c: 0xa6240016  sh          $a0, 0x16($s1)
    ctx->pc = 0x4a463cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a4640: 0xa624000e  sh          $a0, 0xE($s1)
    ctx->pc = 0x4a4640u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a4644: 0xa6240012  sh          $a0, 0x12($s1)
    ctx->pc = 0x4a4644u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a4648: 0xa620001c  sh          $zero, 0x1C($s1)
    ctx->pc = 0x4a4648u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a464c: 0xa6200022  sh          $zero, 0x22($s1)
    ctx->pc = 0x4a464cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a4650: 0xa620002c  sh          $zero, 0x2C($s1)
    ctx->pc = 0x4a4650u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a4654: 0xa620000c  sh          $zero, 0xC($s1)
    ctx->pc = 0x4a4654u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a4658: 0xa6200010  sh          $zero, 0x10($s1)
    ctx->pc = 0x4a4658u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a465c: 0xc123240  jal         func_48C900
    ctx->pc = 0x4A465Cu;
    SET_GPR_U32(ctx, 31, 0x4A4664u);
    ctx->pc = 0x4A4660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A465Cu;
    // 0x4a4660: 0xa6200014  sh          $zero, 0x14($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C900u, 0x4A465Cu, 0x4A4664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4664u;
label_4a4664:
    // 0x4a4664: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a4664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a4668: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a4668u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a466c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a466cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a4670: 0x8122c40  j           func_48B100
    ctx->pc = 0x4A4670u;
    ctx->pc = 0x4A4674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4670u;
    // 0x4a4674: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B100u, 0x4A4670u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4A4678u;
}
