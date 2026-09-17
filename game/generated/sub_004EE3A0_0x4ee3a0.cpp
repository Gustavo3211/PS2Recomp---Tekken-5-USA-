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

// Function: sub_004EE3A0
// Address: 0x4ee3a0 - 0x4ee4c0
void sub_004EE3A0_0x4ee3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE3A0_0x4ee3a0");
#endif

    switch (ctx->pc) {
        case 0x4ee3f4u: goto label_4ee3f4;
        case 0x4ee418u: goto label_4ee418;
        default: break;
    }

    ctx->pc = 0x4ee3a0u;

    // 0x4ee3a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ee3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ee3a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ee3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ee3a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ee3a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ee3ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ee3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ee3b0: 0x26110164  addiu       $s1, $s0, 0x164
    ctx->pc = 0x4ee3b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
    // 0x4ee3b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ee3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4ee3b8: 0x2605014a  addiu       $a1, $s0, 0x14A
    ctx->pc = 0x4ee3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 330));
    // 0x4ee3bc: 0x260601bc  addiu       $a2, $s0, 0x1BC
    ctx->pc = 0x4ee3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4ee3c0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4ee3c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ee3c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4ee3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4ee3c8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x4ee3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ee3cc: 0x4600032  bltz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x4EE3CCu;
    {
        const bool branch_taken_0x4ee3cc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4EE3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE3CCu;
        // 0x4ee3d0: 0xa4a20000  sh          $v0, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee3cc) {
            ctx->pc = 0x4EE498u;
            goto label_4ee498;
        }
    }
    ctx->pc = 0x4EE3D4u;
    // 0x4ee3d4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4ee3d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ee3d8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4ee3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4ee3dc: 0x246311e8  addiu       $v1, $v1, 0x11E8
    ctx->pc = 0x4ee3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4584));
    // 0x4ee3e0: 0x2442dc00  addiu       $v0, $v0, -0x2400
    ctx->pc = 0x4ee3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958080));
    // 0x4ee3e4: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4ee3e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ee3e8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4ee3e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F11E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F11E8u, _value); } while (0);
    // 0x4ee3ec: 0xc12b638  jal         func_4AD8E0
    ctx->pc = 0x4EE3ECu;
    SET_GPR_U32(ctx, 31, 0x4EE3F4u);
    ctx->pc = 0x4EE3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE3ECu;
    // 0x4ee3f0: 0x84640000  lh          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8E0u, 0x4EE3ECu, 0x4EE3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EE3F4u;
label_4ee3f4:
    // 0x4ee3f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4EE3F4u;
    {
        const bool branch_taken_0x4ee3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EE3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE3F4u;
        // 0x4ee3f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee3f4) {
            ctx->pc = 0x4EE410u;
            goto label_4ee410;
        }
    }
    ctx->pc = 0x4EE3FCu;
    // 0x4ee3fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ee3fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ee400: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ee400u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ee404: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ee404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ee408: 0x813b9d6  j           func_4EE758
    ctx->pc = 0x4EE408u;
    ctx->pc = 0x4EE40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE408u;
    // 0x4ee40c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EE758u;
    sub_004EE758_0x4ee758(rdram, ctx, runtime); return;
    ctx->pc = 0x4EE410u;
label_4ee410:
    // 0x4ee410: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4EE410u;
    SET_GPR_U32(ctx, 31, 0x4EE418u);
    ctx->pc = 0x4EE414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE410u;
    // 0x4ee414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4EE410u, 0x4EE418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EE418u;
label_4ee418:
    // 0x4ee418: 0x2403009e  addiu       $v1, $zero, 0x9E
    ctx->pc = 0x4ee418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x4ee41c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4ee41cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ee420: 0x24470010  addiu       $a3, $v0, 0x10
    ctx->pc = 0x4ee420u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4ee424: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4ee424u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4ee428: 0x24480014  addiu       $t0, $v0, 0x14
    ctx->pc = 0x4ee428u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x4ee42c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4ee42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4ee430: 0x24490018  addiu       $t1, $v0, 0x18
    ctx->pc = 0x4ee430u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x4ee434: 0x94e50000  lhu         $a1, 0x0($a3)
    ctx->pc = 0x4ee434u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ee438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ee438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ee43c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4ee43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4ee440: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ee440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ee444: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4ee444u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x4ee448: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4ee448u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x4ee44c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x4ee44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4ee450: 0x95050000  lhu         $a1, 0x0($t0)
    ctx->pc = 0x4ee450u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ee454: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4ee454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4ee458: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4ee458u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x4ee45c: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4ee45cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x4ee460: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x4ee460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4ee464: 0x95250000  lhu         $a1, 0x0($t1)
    ctx->pc = 0x4ee464u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ee468: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4ee468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4ee46c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4ee46cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x4ee470: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x4ee470u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x4ee474: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4ee474u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ee478: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ee478u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ee47c: 0xa4430164  sh          $v1, 0x164($v0)
    ctx->pc = 0x4ee47cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 356), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ee480: 0x96050166  lhu         $a1, 0x166($s0)
    ctx->pc = 0x4ee480u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 358)));
    // 0x4ee484: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ee484u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ee488: 0xa4450166  sh          $a1, 0x166($v0)
    ctx->pc = 0x4ee488u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 358), (uint16_t)GPR_U32(ctx, 5));
    // 0x4ee48c: 0x813b9d6  j           func_4EE758
    ctx->pc = 0x4EE48Cu;
    ctx->pc = 0x4EE490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE48Cu;
    // 0x4ee490: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EE758u;
    sub_004EE758_0x4ee758(rdram, ctx, runtime); return;
    ctx->pc = 0x4EE494u;
    // 0x4ee494: 0x0  nop
    ctx->pc = 0x4ee494u;
    // NOP
label_4ee498:
    // 0x4ee498: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x4ee498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x4ee49c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ee49cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ee4a0: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x4ee4a0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ee4a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ee4a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ee4a8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4ee4a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ee4ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ee4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ee4b0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ee4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ee4b4: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4ee4b4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ee4b8: 0x813b9d6  j           func_4EE758
    ctx->pc = 0x4EE4B8u;
    ctx->pc = 0x4EE4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE4B8u;
    // 0x4ee4bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EE758u;
    sub_004EE758_0x4ee758(rdram, ctx, runtime); return;
    ctx->pc = 0x4EE4C0u;
}
