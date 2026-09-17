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

// Function: sub_004E66E8
// Address: 0x4e66e8 - 0x4e6a58
void sub_004E66E8_0x4e66e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E66E8_0x4e66e8");
#endif

    switch (ctx->pc) {
        case 0x4e6720u: goto label_4e6720;
        case 0x4e67f4u: goto label_4e67f4;
        case 0x4e69e8u: goto label_4e69e8;
        case 0x4e69f8u: goto label_4e69f8;
        case 0x4e6a08u: goto label_4e6a08;
        case 0x4e6a18u: goto label_4e6a18;
        case 0x4e6a28u: goto label_4e6a28;
        case 0x4e6a38u: goto label_4e6a38;
        default: break;
    }

    ctx->pc = 0x4e66e8u;

    // 0x4e66e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e66e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4e66ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e66ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e66f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e66f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e66f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e66f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e66f8: 0x261101b4  addiu       $s1, $s0, 0x1B4
    ctx->pc = 0x4e66f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x4e66fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4e66fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4e6700: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4e6700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4e6704: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4e6704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4e6708: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4e6708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4e670c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4e670cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e6710: 0x440003d  bltz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x4E6710u;
    {
        const bool branch_taken_0x4e6710 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4E6714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6710u;
        // 0x4e6714: 0x26130160  addiu       $s3, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6710) {
            ctx->pc = 0x4E6808u;
            goto label_4e6808;
        }
    }
    ctx->pc = 0x4E6718u;
    // 0x4e6718: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4E6718u;
    SET_GPR_U32(ctx, 31, 0x4E6720u);
    ctx->pc = 0x4E671Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6718u;
    // 0x4e671c: 0x2612014a  addiu       $s2, $s0, 0x14A (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 330));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4E6718u, 0x4E6720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6720u;
label_4e6720:
    // 0x4e6720: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4e6720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4e6724: 0xa6600000  sh          $zero, 0x0($s3)
    ctx->pc = 0x4e6724u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e6728: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4e6728u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4e672c: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x4e672cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e6730: 0x268511d0  addiu       $a1, $s4, 0x11D0
    ctx->pc = 0x4e6730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4560));
    // 0x4e6734: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4e6734u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4e6738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e6738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e673c: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x4e673cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x4e6740: 0x96030016  lhu         $v1, 0x16($s0)
    ctx->pc = 0x4e6740u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x4e6744: 0x9606001a  lhu         $a2, 0x1A($s0)
    ctx->pc = 0x4e6744u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x4e6748: 0xa6030166  sh          $v1, 0x166($s0)
    ctx->pc = 0x4e6748u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 358), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e674c: 0xa6020164  sh          $v0, 0x164($s0)
    ctx->pc = 0x4e674cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 356), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e6750: 0xa6060168  sh          $a2, 0x168($s0)
    ctx->pc = 0x4e6750u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 360), (uint16_t)GPR_U32(ctx, 6));
    // 0x4e6754: 0x860301be  lh          $v1, 0x1BE($s0)
    ctx->pc = 0x4e6754u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x4e6758: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4e6758u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F11D0u));
    // 0x4e675c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4e675cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4e6760: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e6760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e6764: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4e6764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4e6768: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4e6768u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4e676c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e676cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e6770: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4e6770u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e6774: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x4e6774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x4e6778: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4e6778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4e677c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4e677cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4e6780: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4e6780u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4e6784: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e6784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e6788: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4e6788u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e678c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4e678cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4e6790: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4e6790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4e6794: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4e6794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4e6798: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4e6798u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4e679c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4e679cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e67a0: 0xa603015e  sh          $v1, 0x15E($s0)
    ctx->pc = 0x4e67a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e67a4: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4e67a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e67a8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e67a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e67ac: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e67acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4e67b0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4e67b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4e67b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e67b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e67b8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e67b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e67bc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e67bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e67c0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4e67c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e67c4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e67c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e67c8: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4e67c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4e67cc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e67ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4e67d0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4e67d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x4e67d4: 0x24217ec8  addiu       $at, $at, 0x7EC8
    ctx->pc = 0x4e67d4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 32456));
    // 0x4e67d8: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4e67d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4e67dc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4e67dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e67e0: 0xa6030118  sh          $v1, 0x118($s0)
    ctx->pc = 0x4e67e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e67e4: 0x94450002  lhu         $a1, 0x2($v0)
    ctx->pc = 0x4e67e4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x4e67e8: 0xa6000120  sh          $zero, 0x120($s0)
    ctx->pc = 0x4e67e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e67ec: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4E67ECu;
    SET_GPR_U32(ctx, 31, 0x4E67F4u);
    ctx->pc = 0x4E67F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E67ECu;
    // 0x4e67f0: 0xa605011c  sh          $a1, 0x11C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4E67ECu, 0x4E67F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E67F4u;
label_4e67f4:
    // 0x4e67f4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4e67f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e67f8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4e67f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4e67fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4E67FCu;
    {
        const bool branch_taken_0x4e67fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E67FCu;
        // 0x4e6800: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e67fc) {
            ctx->pc = 0x4E6810u;
            goto label_4e6810;
        }
    }
    ctx->pc = 0x4E6804u;
    // 0x4e6804: 0x0  nop
    ctx->pc = 0x4e6804u;
    // NOP
label_4e6808:
    // 0x4e6808: 0x2612014a  addiu       $s2, $s0, 0x14A
    ctx->pc = 0x4e6808u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 330));
    // 0x4e680c: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4e680cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
label_4e6810:
    // 0x4e6810: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4e6810u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e6814: 0x268511d0  addiu       $a1, $s4, 0x11D0
    ctx->pc = 0x4e6814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4560));
    // 0x4e6818: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4e6818u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4e681c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4e681cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4e6820: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x4e6820u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e6824: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e6824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e6828: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4e6828u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e682c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e682cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e6830: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4e6830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4e6834: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x4e6834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e6838: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4e6838u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4e683c: 0x960301b8  lhu         $v1, 0x1B8($s0)
    ctx->pc = 0x4e683cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x4e6840: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4e6840u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e6844: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e6844u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e6848: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x4E6848u;
    {
        const bool branch_taken_0x4e6848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e6848) {
            ctx->pc = 0x4E684Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6848u;
            // 0x4e684c: 0x86420000  lh          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6878u;
            goto label_4e6878;
        }
    }
    ctx->pc = 0x4E6850u;
    // 0x4e6850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e6850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6854: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e6854u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e6858: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e6858u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e685c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e685cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e6860: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e6860u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e6864: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e6864u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e6868: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4e6868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e686c: 0x813a2a2  j           func_4E8A88
    ctx->pc = 0x4E686Cu;
    ctx->pc = 0x4E6870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E686Cu;
    // 0x4e6870: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E8A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E8A88u, 0x4E686Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E6874u;
    // 0x4e6874: 0x0  nop
    ctx->pc = 0x4e6874u;
    // NOP
label_4e6878:
    // 0x4e6878: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x4e6878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4e687c: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4e687cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4e6880: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4e6880u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4e6884: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4e6884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4e6888: 0x24c611dc  addiu       $a2, $a2, 0x11DC
    ctx->pc = 0x4e6888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4572));
    // 0x4e688c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e688cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e6890: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4e6890u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4e6894: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e6894u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e6898: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e6898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e689c: 0x250811e0  addiu       $t0, $t0, 0x11E0
    ctx->pc = 0x4e689cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4576));
    // 0x4e68a0: 0x24e711e4  addiu       $a3, $a3, 0x11E4
    ctx->pc = 0x4e68a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4580));
    // 0x4e68a4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4e68a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e68a8: 0x3042001e  andi        $v0, $v0, 0x1E
    ctx->pc = 0x4e68a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)30);
    // 0x4e68ac: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4e68acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4e68b0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e68b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e68b4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e68b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e68b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e68b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e68bc: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4e68bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e68c0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e68c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e68c4: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4e68c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4e68c8: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4e68c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4e68cc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e68ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e68d0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e68d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e68d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e68d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e68d8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4e68d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e68dc: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x4e68dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x4e68e0: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4e68e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4e68e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e68e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e68e8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e68e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e68ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e68ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e68f0: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4e68f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e68f4: 0x24420590  addiu       $v0, $v0, 0x590
    ctx->pc = 0x4e68f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1424));
    // 0x4e68f8: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4e68f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4e68fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e68fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e6900: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e6900u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e6904: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4e6904u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e6908: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x4e6908u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e690c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e690cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e6910: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x4e6910u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e6914: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e6914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e6918: 0x892025  or          $a0, $a0, $t1
    ctx->pc = 0x4e6918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x4e691c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4e691cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4e6920: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e6920u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e6924: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e6924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e6928: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4e6928u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e692c: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x4e692cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x4e6930: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e6930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e6934: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e6934u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e6938: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4e6938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4e693c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e693cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e6940: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e6940u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e6944: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e6944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e6948: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4e6948u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e694c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x4e694cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x4e6950: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4e6950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4e6954: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e6954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e6958: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e6958u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e695c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4e695cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e6960: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x4e6960u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e6964: 0x86030164  lh          $v1, 0x164($s0)
    ctx->pc = 0x4e6964u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x4e6968: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4e6968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e696c: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4e696cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4e6970: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4e6970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e6974: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e6974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e6978: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4e6978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e697c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4e697cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4e6980: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4e6980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4e6984: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4e6984u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4e6988: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e6988u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e698c: 0x86020166  lh          $v0, 0x166($s0)
    ctx->pc = 0x4e698cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 358)));
    // 0x4e6990: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4e6990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4e6994: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4e6994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4e6998: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4e6998u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4e699c: 0x86020168  lh          $v0, 0x168($s0)
    ctx->pc = 0x4e699cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x4e69a0: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4e69a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4e69a4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4e69a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4e69a8: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4e69a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x4e69ac: 0x9602015e  lhu         $v0, 0x15E($s0)
    ctx->pc = 0x4e69acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 350)));
    // 0x4e69b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e69b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e69b4: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4e69b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4e69b8: 0x2c430006  sltiu       $v1, $v0, 0x6
    ctx->pc = 0x4e69b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x4e69bc: 0x5060001f  beql        $v1, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x4E69BCu;
    {
        const bool branch_taken_0x4e69bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e69bc) {
            ctx->pc = 0x4E69C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E69BCu;
            // 0x4e69c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6A3Cu;
            goto label_4e6a3c;
        }
    }
    ctx->pc = 0x4E69C4u;
    // 0x4e69c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4e69c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4e69c8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4e69c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4e69cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4e69ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4e69d0: 0x8c63ba20  lw          $v1, -0x45E0($v1)
    ctx->pc = 0x4e69d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949408)));
    // 0x4e69d4: 0x600008  jr          $v1
    ctx->pc = 0x4E69D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4E69E0u: goto label_4e69e0;
            case 0x4E69F0u: goto label_4e69f0;
            case 0x4E6A00u: goto label_4e6a00;
            case 0x4E6A10u: goto label_4e6a10;
            case 0x4E6A20u: goto label_4e6a20;
            case 0x4E6A30u: goto label_4e6a30;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E69D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4E69DCu;
    // 0x4e69dc: 0x0  nop
    ctx->pc = 0x4e69dcu;
    // NOP
label_4e69e0:
    // 0x4e69e0: 0xc139ab8  jal         func_4E6AE0
    ctx->pc = 0x4E69E0u;
    SET_GPR_U32(ctx, 31, 0x4E69E8u);
    ctx->pc = 0x4E69E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E69E0u;
    // 0x4e69e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E6AE0u, 0x4E69E0u, 0x4E69E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E69E8u;
label_4e69e8:
    // 0x4e69e8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4E69E8u;
    {
        const bool branch_taken_0x4e69e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E69ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E69E8u;
        // 0x4e69ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e69e8) {
            ctx->pc = 0x4E6A3Cu;
            goto label_4e6a3c;
        }
    }
    ctx->pc = 0x4E69F0u;
label_4e69f0:
    // 0x4e69f0: 0xc139a96  jal         func_4E6A58
    ctx->pc = 0x4E69F0u;
    SET_GPR_U32(ctx, 31, 0x4E69F8u);
    ctx->pc = 0x4E69F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E69F0u;
    // 0x4e69f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E6A58u, 0x4E69F0u, 0x4E69F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E69F8u;
label_4e69f8:
    // 0x4e69f8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4E69F8u;
    {
        const bool branch_taken_0x4e69f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E69FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E69F8u;
        // 0x4e69fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e69f8) {
            ctx->pc = 0x4E6A3Cu;
            goto label_4e6a3c;
        }
    }
    ctx->pc = 0x4E6A00u;
label_4e6a00:
    // 0x4e6a00: 0xc139aca  jal         func_4E6B28
    ctx->pc = 0x4E6A00u;
    SET_GPR_U32(ctx, 31, 0x4E6A08u);
    ctx->pc = 0x4E6A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6A00u;
    // 0x4e6a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E6B28u, 0x4E6A00u, 0x4E6A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6A08u;
label_4e6a08:
    // 0x4e6a08: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4E6A08u;
    {
        const bool branch_taken_0x4e6a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6A08u;
        // 0x4e6a0c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6a08) {
            ctx->pc = 0x4E6A3Cu;
            goto label_4e6a3c;
        }
    }
    ctx->pc = 0x4E6A10u;
label_4e6a10:
    // 0x4e6a10: 0xc139aa6  jal         func_4E6A98
    ctx->pc = 0x4E6A10u;
    SET_GPR_U32(ctx, 31, 0x4E6A18u);
    ctx->pc = 0x4E6A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6A10u;
    // 0x4e6a14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E6A98u, 0x4E6A10u, 0x4E6A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6A18u;
label_4e6a18:
    // 0x4e6a18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4E6A18u;
    {
        const bool branch_taken_0x4e6a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6A18u;
        // 0x4e6a1c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6a18) {
            ctx->pc = 0x4E6A3Cu;
            goto label_4e6a3c;
        }
    }
    ctx->pc = 0x4E6A20u;
label_4e6a20:
    // 0x4e6a20: 0xc139aee  jal         func_4E6BB8
    ctx->pc = 0x4E6A20u;
    SET_GPR_U32(ctx, 31, 0x4E6A28u);
    ctx->pc = 0x4E6A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6A20u;
    // 0x4e6a24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E6BB8u, 0x4E6A20u, 0x4E6A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6A28u;
label_4e6a28:
    // 0x4e6a28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4E6A28u;
    {
        const bool branch_taken_0x4e6a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6A28u;
        // 0x4e6a2c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6a28) {
            ctx->pc = 0x4E6A3Cu;
            goto label_4e6a3c;
        }
    }
    ctx->pc = 0x4E6A30u;
label_4e6a30:
    // 0x4e6a30: 0xc139adc  jal         func_4E6B70
    ctx->pc = 0x4E6A30u;
    SET_GPR_U32(ctx, 31, 0x4E6A38u);
    ctx->pc = 0x4E6A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6A30u;
    // 0x4e6a34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E6B70u, 0x4E6A30u, 0x4E6A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6A38u;
label_4e6a38:
    // 0x4e6a38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e6a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e6a3c:
    // 0x4e6a3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e6a3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e6a40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e6a40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e6a44: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e6a44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e6a48: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e6a48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e6a4c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4e6a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e6a50: 0x3e00008  jr          $ra
    ctx->pc = 0x4E6A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E6A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6A50u;
        // 0x4e6a54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E6A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E6A58u;
}
