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

// Function: sub_004DC360
// Address: 0x4dc360 - 0x4dc4d0
void sub_004DC360_0x4dc360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DC360_0x4dc360");
#endif

    switch (ctx->pc) {
        case 0x4dc37cu: goto label_4dc37c;
        case 0x4dc398u: goto label_4dc398;
        case 0x4dc498u: goto label_4dc498;
        case 0x4dc4a8u: goto label_4dc4a8;
        case 0x4dc4b8u: goto label_4dc4b8;
        default: break;
    }

    ctx->pc = 0x4dc360u;

    // 0x4dc360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4dc360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4dc364: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4dc364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4dc368: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4dc368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dc36c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4dc36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4dc370: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4dc370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4dc374: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4DC374u;
    SET_GPR_U32(ctx, 31, 0x4DC37Cu);
    ctx->pc = 0x4DC378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC374u;
    // 0x4dc378: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4DC374u, 0x4DC37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC37Cu;
label_4dc37c:
    // 0x4dc37c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4dc37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4dc380: 0xac621144  sw          $v0, 0x1144($v1)
    ctx->pc = 0x4dc380u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F1144u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1144u, _value); } while (0);
    // 0x4dc384: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4dc384u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4dc388: 0x442000f  bltzl       $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4DC388u;
    {
        const bool branch_taken_0x4dc388 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4dc388) {
            ctx->pc = 0x4DC38Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DC388u;
            // 0x4dc38c: 0x8e040140  lw          $a0, 0x140($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DC3C8u;
            goto label_4dc3c8;
        }
    }
    ctx->pc = 0x4DC390u;
    // 0x4dc390: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4DC390u;
    SET_GPR_U32(ctx, 31, 0x4DC398u);
    ctx->pc = 0x4DC394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC390u;
    // 0x4dc394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4DC390u, 0x4DC398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC398u;
label_4dc398:
    // 0x4dc398: 0xa6000118  sh          $zero, 0x118($s0)
    ctx->pc = 0x4dc398u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 0));
    // 0x4dc39c: 0x96020148  lhu         $v0, 0x148($s0)
    ctx->pc = 0x4dc39cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x4dc3a0: 0xa600011c  sh          $zero, 0x11C($s0)
    ctx->pc = 0x4dc3a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 0));
    // 0x4dc3a4: 0xa602013a  sh          $v0, 0x13A($s0)
    ctx->pc = 0x4dc3a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 314), (uint16_t)GPR_U32(ctx, 2));
    // 0x4dc3a8: 0xa6000120  sh          $zero, 0x120($s0)
    ctx->pc = 0x4dc3a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 0));
    // 0x4dc3ac: 0xa60001b8  sh          $zero, 0x1B8($s0)
    ctx->pc = 0x4dc3acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 440), (uint16_t)GPR_U32(ctx, 0));
    // 0x4dc3b0: 0xa60001ba  sh          $zero, 0x1BA($s0)
    ctx->pc = 0x4dc3b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 442), (uint16_t)GPR_U32(ctx, 0));
    // 0x4dc3b4: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4dc3b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4dc3b8: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4dc3b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4dc3bc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4dc3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4dc3c0: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4dc3c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4dc3c4: 0x8e040140  lw          $a0, 0x140($s0)
    ctx->pc = 0x4dc3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
label_4dc3c8:
    // 0x4dc3c8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4dc3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4dc3cc: 0xac441140  sw          $a0, 0x1140($v0)
    ctx->pc = 0x4dc3ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F1140u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1140u, _value); } while (0);
    // 0x4dc3d0: 0x848301b4  lh          $v1, 0x1B4($a0)
    ctx->pc = 0x4dc3d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x4dc3d4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4DC3D4u;
    {
        const bool branch_taken_0x4dc3d4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4DC3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC3D4u;
        // 0x4dc3d8: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc3d4) {
            ctx->pc = 0x4DC3F0u;
            goto label_4dc3f0;
        }
    }
    ctx->pc = 0x4DC3DCu;
    // 0x4dc3dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4dc3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dc3e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4dc3e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dc3e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4dc3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4dc3e8: 0x8137a66  j           func_4DE998
    ctx->pc = 0x4DC3E8u;
    ctx->pc = 0x4DC3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC3E8u;
    // 0x4dc3ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE998u, 0x4DC3E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DC3F0u;
label_4dc3f0:
    // 0x4dc3f0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4dc3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4dc3f4: 0x84830160  lh          $v1, 0x160($a0)
    ctx->pc = 0x4dc3f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x4dc3f8: 0x24451120  addiu       $a1, $v0, 0x1120
    ctx->pc = 0x4dc3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4384));
    // 0x4dc3fc: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4dc3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4dc400: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4dc400u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F1120u));
    // 0x4dc404: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4dc404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4dc408: 0x26060160  addiu       $a2, $s0, 0x160
    ctx->pc = 0x4dc408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x4dc40c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4dc40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4dc410: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4dc410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4dc414: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4dc414u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4dc418: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x4dc418u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4dc41c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4dc41cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dc420: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4DC420u;
    {
        const bool branch_taken_0x4dc420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4DC424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC420u;
        // 0x4dc424: 0x94a40000  lhu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc420) {
            ctx->pc = 0x4DC440u;
            goto label_4dc440;
        }
    }
    ctx->pc = 0x4DC428u;
    // 0x4dc428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4dc428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dc42c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4dc42cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dc430: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4dc430u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4dc434: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4dc434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4dc438: 0x813713a  j           func_4DC4E8
    ctx->pc = 0x4DC438u;
    ctx->pc = 0x4DC43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC438u;
    // 0x4dc43c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DC4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DC4E8u, 0x4DC438u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DC440u;
label_4dc440:
    // 0x4dc440: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x4dc440u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x4dc444: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4dc444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4dc448: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4dc448u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dc44c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4dc44cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4dc450: 0x22443  sra         $a0, $v0, 17
    ctx->pc = 0x4dc450u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4dc454: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x4DC454u;
    {
        const bool branch_taken_0x4dc454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x4DC458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC454u;
        // 0x4dc458: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc454) {
            ctx->pc = 0x4DC490u;
            goto label_4dc490;
        }
    }
    ctx->pc = 0x4DC45Cu;
    // 0x4dc45c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4DC45Cu;
    {
        const bool branch_taken_0x4dc45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dc45c) {
            ctx->pc = 0x4DC460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DC45Cu;
            // 0x4dc460: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DC478u;
            goto label_4dc478;
        }
    }
    ctx->pc = 0x4DC464u;
    // 0x4dc464: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x4DC464u;
    {
        const bool branch_taken_0x4dc464 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dc464) {
            ctx->pc = 0x4DC4A0u;
            goto label_4dc4a0;
        }
    }
    ctx->pc = 0x4DC46Cu;
    // 0x4dc46c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4DC46Cu;
    {
        const bool branch_taken_0x4dc46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DC470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC46Cu;
        // 0x4dc470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc46c) {
            ctx->pc = 0x4DC4BCu;
            goto label_4dc4bc;
        }
    }
    ctx->pc = 0x4DC474u;
    // 0x4dc474: 0x0  nop
    ctx->pc = 0x4dc474u;
    // NOP
label_4dc478:
    // 0x4dc478: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4DC478u;
    {
        const bool branch_taken_0x4dc478 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4DC47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC478u;
        // 0x4dc47c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc478) {
            ctx->pc = 0x4DC4A0u;
            goto label_4dc4a0;
        }
    }
    ctx->pc = 0x4DC480u;
    // 0x4dc480: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4DC480u;
    {
        const bool branch_taken_0x4dc480 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4dc480) {
            ctx->pc = 0x4DC4B0u;
            goto label_4dc4b0;
        }
    }
    ctx->pc = 0x4DC488u;
    // 0x4dc488: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4DC488u;
    {
        const bool branch_taken_0x4dc488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DC48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC488u;
        // 0x4dc48c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc488) {
            ctx->pc = 0x4DC4BCu;
            goto label_4dc4bc;
        }
    }
    ctx->pc = 0x4DC490u;
label_4dc490:
    // 0x4dc490: 0xc137136  jal         func_4DC4D8
    ctx->pc = 0x4DC490u;
    SET_GPR_U32(ctx, 31, 0x4DC498u);
    ctx->pc = 0x4DC494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC490u;
    // 0x4dc494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DC4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DC4D8u, 0x4DC490u, 0x4DC498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC498u;
label_4dc498:
    // 0x4dc498: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4DC498u;
    {
        const bool branch_taken_0x4dc498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DC49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC498u;
        // 0x4dc49c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc498) {
            ctx->pc = 0x4DC4BCu;
            goto label_4dc4bc;
        }
    }
    ctx->pc = 0x4DC4A0u;
label_4dc4a0:
    // 0x4dc4a0: 0xc137134  jal         func_4DC4D0
    ctx->pc = 0x4DC4A0u;
    SET_GPR_U32(ctx, 31, 0x4DC4A8u);
    ctx->pc = 0x4DC4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC4A0u;
    // 0x4dc4a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DC4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DC4D0u, 0x4DC4A0u, 0x4DC4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC4A8u;
label_4dc4a8:
    // 0x4dc4a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4DC4A8u;
    {
        const bool branch_taken_0x4dc4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DC4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC4A8u;
        // 0x4dc4ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc4a8) {
            ctx->pc = 0x4DC4BCu;
            goto label_4dc4bc;
        }
    }
    ctx->pc = 0x4DC4B0u;
label_4dc4b0:
    // 0x4dc4b0: 0xc137134  jal         func_4DC4D0
    ctx->pc = 0x4DC4B0u;
    SET_GPR_U32(ctx, 31, 0x4DC4B8u);
    ctx->pc = 0x4DC4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC4B0u;
    // 0x4dc4b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DC4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DC4D0u, 0x4DC4B0u, 0x4DC4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC4B8u;
label_4dc4b8:
    // 0x4dc4b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4dc4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dc4bc:
    // 0x4dc4bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4dc4bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dc4c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4dc4c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4dc4c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4dc4c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4dc4c8: 0x813713a  j           func_4DC4E8
    ctx->pc = 0x4DC4C8u;
    ctx->pc = 0x4DC4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC4C8u;
    // 0x4dc4cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DC4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DC4E8u, 0x4DC4C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DC4D0u;
}
