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

// Function: sub_00488388
// Address: 0x488388 - 0x488468
void sub_00488388_0x488388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488388_0x488388");
#endif

    switch (ctx->pc) {
        case 0x4883a0u: goto label_4883a0;
        case 0x4883ecu: goto label_4883ec;
        case 0x488434u: goto label_488434;
        case 0x488448u: goto label_488448;
        case 0x488450u: goto label_488450;
        default: break;
    }

    ctx->pc = 0x488388u;

    // 0x488388: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x488388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48838c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48838cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x488390: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x488390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x488394: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x488394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x488398: 0xc124620  jal         func_491880
    ctx->pc = 0x488398u;
    SET_GPR_U32(ctx, 31, 0x4883A0u);
    ctx->pc = 0x48839Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488398u;
    // 0x48839c: 0x3c110073  lui         $s1, 0x73 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x488398u, 0x4883A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4883A0u;
label_4883a0:
    // 0x4883a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4883a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4883a4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x4883a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x4883a8: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x4883a8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4883ac: 0xa420e806  sh          $zero, -0x17FA($at)
    ctx->pc = 0x4883acu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961158), (uint16_t)GPR_U32(ctx, 0));
    // 0x4883b0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x4883b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x4883b4: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x4883b4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4883b8: 0xa423e804  sh          $v1, -0x17FC($at)
    ctx->pc = 0x4883b8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961156), (uint16_t)GPR_U32(ctx, 3));
    // 0x4883bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4883bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4883c0: 0x2631d680  addiu       $s1, $s1, -0x2980
    ctx->pc = 0x4883c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956672));
    // 0x4883c4: 0xa6200008  sh          $zero, 0x8($s1)
    ctx->pc = 0x4883c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x4883c8: 0xa622009a  sh          $v0, 0x9A($s1)
    ctx->pc = 0x4883c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 154), (uint16_t)GPR_U32(ctx, 2));
    // 0x4883cc: 0xa6200078  sh          $zero, 0x78($s1)
    ctx->pc = 0x4883ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 120), (uint16_t)GPR_U32(ctx, 0));
    // 0x4883d0: 0xa2202250  sb          $zero, 0x2250($s1)
    ctx->pc = 0x4883d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8784), (uint8_t)GPR_U32(ctx, 0));
    // 0x4883d4: 0xa2202251  sb          $zero, 0x2251($s1)
    ctx->pc = 0x4883d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8785), (uint8_t)GPR_U32(ctx, 0));
    // 0x4883d8: 0xa620001a  sh          $zero, 0x1A($s1)
    ctx->pc = 0x4883d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x4883dc: 0xa620007e  sh          $zero, 0x7E($s1)
    ctx->pc = 0x4883dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 126), (uint16_t)GPR_U32(ctx, 0));
    // 0x4883e0: 0xa6202210  sh          $zero, 0x2210($s1)
    ctx->pc = 0x4883e0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8720), (uint16_t)GPR_U32(ctx, 0));
    // 0x4883e4: 0xc12a6c4  jal         func_4A9B10
    ctx->pc = 0x4883E4u;
    SET_GPR_U32(ctx, 31, 0x4883ECu);
    ctx->pc = 0x4883E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4883E4u;
    // 0x4883e8: 0xa6202212  sh          $zero, 0x2212($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 8722), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9B10u, 0x4883E4u, 0x4883ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4883ECu;
label_4883ec:
    // 0x4883ec: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4883ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4883f0: 0x90440008  lbu         $a0, 0x8($v0)
    ctx->pc = 0x4883f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4883f4: 0x9043000a  lbu         $v1, 0xA($v0)
    ctx->pc = 0x4883f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x4883f8: 0x90450009  lbu         $a1, 0x9($v0)
    ctx->pc = 0x4883f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x4883fc: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x4883fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x488400: 0x9046000b  lbu         $a2, 0xB($v0)
    ctx->pc = 0x488400u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x488404: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x488404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x488408: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x488408u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x48840c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x48840cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x488410: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x488410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x488414: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x488414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x488418: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x488418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x48841c: 0x9043fff8  lbu         $v1, -0x8($v0)
    ctx->pc = 0x48841cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967288)));
    // 0x488420: 0x9050fff9  lbu         $s0, -0x7($v0)
    ctx->pc = 0x488420u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967289)));
    // 0x488424: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x488424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x488428: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x488428u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x48842c: 0xc13e732  jal         func_4F9CC8
    ctx->pc = 0x48842Cu;
    SET_GPR_U32(ctx, 31, 0x488434u);
    ctx->pc = 0x488430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48842Cu;
    // 0x488430: 0x2078025  or          $s0, $s0, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9CC8u, 0x48842Cu, 0x488434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488434u;
label_488434:
    // 0x488434: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x488434u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x488438: 0x1083c3  sra         $s0, $s0, 15
    ctx->pc = 0x488438u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 15));
    // 0x48843c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x48843cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x488440: 0xc124c12  jal         func_493048
    ctx->pc = 0x488440u;
    SET_GPR_U32(ctx, 31, 0x488448u);
    ctx->pc = 0x488444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488440u;
    // 0x488444: 0xae2222ac  sw          $v0, 0x22AC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8876), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x493048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x493048u, 0x488440u, 0x488448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488448u;
label_488448:
    // 0x488448: 0xc124c72  jal         func_4931C8
    ctx->pc = 0x488448u;
    SET_GPR_U32(ctx, 31, 0x488450u);
    ctx->pc = 0x4931C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4931C8u, 0x488448u, 0x488450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488450u;
label_488450:
    // 0x488450: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x488450u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x488454: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x488454u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x488458: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x488458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48845c: 0x8124d26  j           func_493498
    ctx->pc = 0x48845Cu;
    ctx->pc = 0x488460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48845Cu;
    // 0x488460: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x493498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x493498u, 0x48845Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x488464u;
    // 0x488464: 0x0  nop
    ctx->pc = 0x488464u;
    // NOP
    ctx->pc = 0x488468u;
}
