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

// Function: sub_002DC390
// Address: 0x2dc390 - 0x2dc550
void sub_002DC390_0x2dc390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC390_0x2dc390");
#endif

    switch (ctx->pc) {
        case 0x2dc4b8u: goto label_2dc4b8;
        case 0x2dc4f8u: goto label_2dc4f8;
        default: break;
    }

    ctx->pc = 0x2dc390u;

    // 0x2dc390: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2dc390u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc394: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2dc394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2dc398: 0x10a20045  beq         $a1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2DC398u;
    {
        const bool branch_taken_0x2dc398 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DC39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC398u;
        // 0x2dc39c: 0x25280012  addiu       $t0, $t1, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc398) {
            ctx->pc = 0x2DC4B0u;
            goto label_2dc4b0;
        }
    }
    ctx->pc = 0x2DC3A0u;
    // 0x2dc3a0: 0x28a20015  slti        $v0, $a1, 0x15
    ctx->pc = 0x2dc3a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x2dc3a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DC3A4u;
    {
        const bool branch_taken_0x2dc3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC3A4u;
        // 0x2dc3a8: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc3a4) {
            ctx->pc = 0x2DC3C0u;
            goto label_2dc3c0;
        }
    }
    ctx->pc = 0x2DC3ACu;
    // 0x2dc3ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2dc3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2dc3b0: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DC3B0u;
    {
        const bool branch_taken_0x2dc3b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DC3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC3B0u;
        // 0x2dc3b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc3b0) {
            ctx->pc = 0x2DC3D0u;
            goto label_2dc3d0;
        }
    }
    ctx->pc = 0x2DC3B8u;
    // 0x2dc3b8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2DC3B8u;
    {
        const bool branch_taken_0x2dc3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC3B8u;
        // 0x2dc3bc: 0x61840  sll         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc3b8) {
            ctx->pc = 0x2DC4F8u;
            goto label_2dc4f8;
        }
    }
    ctx->pc = 0x2DC3C0u;
label_2dc3c0:
    // 0x2dc3c0: 0x10a2003b  beq         $a1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2DC3C0u;
    {
        const bool branch_taken_0x2dc3c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DC3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC3C0u;
        // 0x2dc3c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc3c0) {
            ctx->pc = 0x2DC4B0u;
            goto label_2dc4b0;
        }
    }
    ctx->pc = 0x2DC3C8u;
    // 0x2dc3c8: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2DC3C8u;
    {
        const bool branch_taken_0x2dc3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC3C8u;
        // 0x2dc3cc: 0x61840  sll         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc3c8) {
            ctx->pc = 0x2DC4F8u;
            goto label_2dc4f8;
        }
    }
    ctx->pc = 0x2DC3D0u;
label_2dc3d0:
    // 0x2dc3d0: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x2dc3d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2dc3d4: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2dc3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2dc3d8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DC3D8u;
    {
        const bool branch_taken_0x2dc3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC3D8u;
        // 0x2dc3dc: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc3d8) {
            ctx->pc = 0x2DC3F4u;
            goto label_2dc3f4;
        }
    }
    ctx->pc = 0x2DC3E0u;
    // 0x2dc3e0: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x2dc3e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2dc3e4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2dc3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2dc3e8: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x2dc3e8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2dc3ec: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x2dc3ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2dc3f0: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x2dc3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_2dc3f4:
    // 0x2dc3f4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DC3F4u;
    {
        const bool branch_taken_0x2dc3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc3f4) {
            ctx->pc = 0x2DC3F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC3F4u;
            // 0x2dc3f8: 0x95030000  lhu         $v1, 0x0($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC40Cu;
            goto label_2dc40c;
        }
    }
    ctx->pc = 0x2DC3FCu;
    // 0x2dc3fc: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x2dc3fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2dc400: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x2dc400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x2dc404: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x2dc404u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2dc408: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x2dc408u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_2dc40c:
    // 0x2dc40c: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2dc40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2dc410: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DC410u;
    {
        const bool branch_taken_0x2dc410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC410u;
        // 0x2dc414: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc410) {
            ctx->pc = 0x2DC42Cu;
            goto label_2dc42c;
        }
    }
    ctx->pc = 0x2DC418u;
    // 0x2dc418: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x2dc418u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2dc41c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2dc41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2dc420: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x2dc420u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2dc424: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x2dc424u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2dc428: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x2dc428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_2dc42c:
    // 0x2dc42c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DC42Cu;
    {
        const bool branch_taken_0x2dc42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc42c) {
            ctx->pc = 0x2DC430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC42Cu;
            // 0x2dc430: 0x95220004  lhu         $v0, 0x4($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC444u;
            goto label_2dc444;
        }
    }
    ctx->pc = 0x2DC434u;
    // 0x2dc434: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x2dc434u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2dc438: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x2dc438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x2dc43c: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x2dc43cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2dc440: 0x95220004  lhu         $v0, 0x4($t1)
    ctx->pc = 0x2dc440u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
label_2dc444:
    // 0x2dc444: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2dc444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2dc448: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DC448u;
    {
        const bool branch_taken_0x2dc448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC448u;
        // 0x2dc44c: 0x95020004  lhu         $v0, 0x4($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc448) {
            ctx->pc = 0x2DC45Cu;
            goto label_2dc45c;
        }
    }
    ctx->pc = 0x2DC450u;
    // 0x2dc450: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2dc450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2dc454: 0xa5020004  sh          $v0, 0x4($t0)
    ctx->pc = 0x2dc454u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2dc458: 0x95020004  lhu         $v0, 0x4($t0)
    ctx->pc = 0x2dc458u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
label_2dc45c:
    // 0x2dc45c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2dc45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2dc460: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DC460u;
    {
        const bool branch_taken_0x2dc460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc460) {
            ctx->pc = 0x2DC464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC460u;
            // 0x2dc464: 0x95220006  lhu         $v0, 0x6($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC478u;
            goto label_2dc478;
        }
    }
    ctx->pc = 0x2DC468u;
    // 0x2dc468: 0x95220004  lhu         $v0, 0x4($t1)
    ctx->pc = 0x2dc468u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2dc46c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2dc46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2dc470: 0xa5220004  sh          $v0, 0x4($t1)
    ctx->pc = 0x2dc470u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2dc474: 0x95220006  lhu         $v0, 0x6($t1)
    ctx->pc = 0x2dc474u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
label_2dc478:
    // 0x2dc478: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2dc478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2dc47c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DC47Cu;
    {
        const bool branch_taken_0x2dc47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC47Cu;
        // 0x2dc480: 0x95020006  lhu         $v0, 0x6($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc47c) {
            ctx->pc = 0x2DC490u;
            goto label_2dc490;
        }
    }
    ctx->pc = 0x2DC484u;
    // 0x2dc484: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2dc484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2dc488: 0xa5020006  sh          $v0, 0x6($t0)
    ctx->pc = 0x2dc488u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2dc48c: 0x95020006  lhu         $v0, 0x6($t0)
    ctx->pc = 0x2dc48cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
label_2dc490:
    // 0x2dc490: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2dc490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2dc494: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2DC494u;
    {
        const bool branch_taken_0x2dc494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc494) {
            ctx->pc = 0x2DC544u;
            goto label_2dc544;
        }
    }
    ctx->pc = 0x2DC49Cu;
    // 0x2dc49c: 0x95220006  lhu         $v0, 0x6($t1)
    ctx->pc = 0x2dc49cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x2dc4a0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2dc4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2dc4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC4A4u;
        // 0x2dc4a8: 0xa5220006  sh          $v0, 0x6($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC4A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC4ACu;
    // 0x2dc4ac: 0x0  nop
    ctx->pc = 0x2dc4acu;
    // NOP
label_2dc4b0:
    // 0x2dc4b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dc4b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc4b4: 0x0  nop
    ctx->pc = 0x2dc4b4u;
    // NOP
label_2dc4b8:
    // 0x2dc4b8: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x2dc4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2dc4bc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2dc4bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2dc4c0: 0x1042821  addu        $a1, $t0, $a0
    ctx->pc = 0x2dc4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2dc4c4: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x2dc4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x2dc4c8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2dc4c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2dc4cc: 0x28e60004  slti        $a2, $a3, 0x4
    ctx->pc = 0x2dc4ccu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2dc4d0: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x2dc4d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dc4d4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2dc4d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2dc4d8: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x2dc4d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dc4dc: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2dc4dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2dc4e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2dc4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2dc4e4: 0x14c0fff4  bnez        $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x2DC4E4u;
    {
        const bool branch_taken_0x2dc4e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC4E4u;
        // 0x2dc4e8: 0xa4a20000  sh          $v0, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc4e4) {
            ctx->pc = 0x2DC4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc4b8;
        }
    }
    ctx->pc = 0x2DC4ECu;
    // 0x2dc4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC4F4u;
    // 0x2dc4f4: 0x0  nop
    ctx->pc = 0x2dc4f4u;
    // NOP
label_2dc4f8:
    // 0x2dc4f8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2dc4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2dc4fc: 0x1232821  addu        $a1, $t1, $v1
    ctx->pc = 0x2dc4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2dc500: 0x1032021  addu        $a0, $t0, $v1
    ctx->pc = 0x2dc500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2dc504: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2dc504u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2dc508: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2dc508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2dc50c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DC50Cu;
    {
        const bool branch_taken_0x2dc50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC50Cu;
        // 0x2dc510: 0x28c70004  slti        $a3, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc50c) {
            ctx->pc = 0x2DC520u;
            goto label_2dc520;
        }
    }
    ctx->pc = 0x2DC514u;
    // 0x2dc514: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2dc514u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dc518: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2dc518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2dc51c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x2dc51cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_2dc520:
    // 0x2dc520: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2dc520u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dc524: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2dc524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2dc528: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DC528u;
    {
        const bool branch_taken_0x2dc528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc528) {
            ctx->pc = 0x2DC53Cu;
            goto label_2dc53c;
        }
    }
    ctx->pc = 0x2DC530u;
    // 0x2dc530: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2dc530u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2dc534: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2dc534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2dc538: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x2dc538u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_2dc53c:
    // 0x2dc53c: 0x14e0ffee  bnez        $a3, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2DC53Cu;
    {
        const bool branch_taken_0x2dc53c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC53Cu;
        // 0x2dc540: 0x61840  sll         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc53c) {
            ctx->pc = 0x2DC4F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc4f8;
        }
    }
    ctx->pc = 0x2DC544u;
label_2dc544:
    // 0x2dc544: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC54Cu;
    // 0x2dc54c: 0x0  nop
    ctx->pc = 0x2dc54cu;
    // NOP
    ctx->pc = 0x2dc550u;
}
