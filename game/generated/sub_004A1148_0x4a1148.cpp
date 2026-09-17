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

// Function: sub_004A1148
// Address: 0x4a1148 - 0x4a1290
void sub_004A1148_0x4a1148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A1148_0x4a1148");
#endif

    switch (ctx->pc) {
        case 0x4a1158u: goto label_4a1158;
        case 0x4a1178u: goto label_4a1178;
        case 0x4a11d4u: goto label_4a11d4;
        case 0x4a11f8u: goto label_4a11f8;
        case 0x4a1248u: goto label_4a1248;
        default: break;
    }

    ctx->pc = 0x4a1148u;

    // 0x4a1148: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a1148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a114c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a114cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a1150: 0xc1232e2  jal         func_48CB88
    ctx->pc = 0x4A1150u;
    SET_GPR_U32(ctx, 31, 0x4A1158u);
    ctx->pc = 0x48CB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CB88u, 0x4A1150u, 0x4A1158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1158u;
label_4a1158:
    // 0x4a1158: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x4a1158u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4a115c: 0x84c20008  lh          $v0, 0x8($a2)
    ctx->pc = 0x4a115cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4a1160: 0x440001a  bltz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4A1160u;
    {
        const bool branch_taken_0x4a1160 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4a1160) {
            ctx->pc = 0x4A11CCu;
            goto label_4a11cc;
        }
    }
    ctx->pc = 0x4A1168u;
    // 0x4a1168: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4a1168u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4a116c: 0x24084000  addiu       $t0, $zero, 0x4000
    ctx->pc = 0x4a116cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x4a1170: 0x84c201b6  lh          $v0, 0x1B6($a2)
    ctx->pc = 0x4a1170u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 438)));
    // 0x4a1174: 0x0  nop
    ctx->pc = 0x4a1174u;
    // NOP
label_4a1178:
    // 0x4a1178: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x4a1178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x4a117c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x4A117Cu;
    {
        const bool branch_taken_0x4a117c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a117c) {
            ctx->pc = 0x4A1180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A117Cu;
            // 0x4a1180: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A11C0u;
            goto label_4a11c0;
        }
    }
    ctx->pc = 0x4A1184u;
    // 0x4a1184: 0x24c40018  addiu       $a0, $a2, 0x18
    ctx->pc = 0x4a1184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x4a1188: 0x24c50122  addiu       $a1, $a2, 0x122
    ctx->pc = 0x4a1188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 290));
    // 0x4a118c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a118cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a1190: 0x671024  and         $v0, $v1, $a3
    ctx->pc = 0x4a1190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4a1194: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4a1194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4a1198: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a1198u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a119c: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x4a119cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4a11a0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a11a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a11a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a11a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a11a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a11a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a11ac: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4a11acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4a11b0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4a11b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a11b4: 0x2442c000  addiu       $v0, $v0, -0x4000
    ctx->pc = 0x4a11b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950912));
    // 0x4a11b8: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4a11b8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a11bc: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x4a11bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_4a11c0:
    // 0x4a11c0: 0x84c20008  lh          $v0, 0x8($a2)
    ctx->pc = 0x4a11c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4a11c4: 0x443ffec  bgezl       $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x4A11C4u;
    {
        const bool branch_taken_0x4a11c4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4a11c4) {
            ctx->pc = 0x4A11C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A11C4u;
            // 0x4a11c8: 0x84c201b6  lh          $v0, 0x1B6($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 438)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A1178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a1178;
        }
    }
    ctx->pc = 0x4A11CCu;
label_4a11cc:
    // 0x4a11cc: 0xc1232ea  jal         func_48CBA8
    ctx->pc = 0x4A11CCu;
    SET_GPR_U32(ctx, 31, 0x4A11D4u);
    ctx->pc = 0x48CBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBA8u, 0x4A11CCu, 0x4A11D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A11D4u;
label_4a11d4:
    // 0x4a11d4: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x4a11d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4a11d8: 0x84c20008  lh          $v0, 0x8($a2)
    ctx->pc = 0x4a11d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4a11dc: 0x4400018  bltz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x4A11DCu;
    {
        const bool branch_taken_0x4a11dc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4a11dc) {
            ctx->pc = 0x4A1240u;
            goto label_4a1240;
        }
    }
    ctx->pc = 0x4A11E4u;
    // 0x4a11e4: 0x240900de  addiu       $t1, $zero, 0xDE
    ctx->pc = 0x4a11e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
    // 0x4a11e8: 0x240800dc  addiu       $t0, $zero, 0xDC
    ctx->pc = 0x4a11e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x4a11ec: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4a11ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4a11f0: 0x24074000  addiu       $a3, $zero, 0x4000
    ctx->pc = 0x4a11f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x4a11f4: 0x0  nop
    ctx->pc = 0x4a11f4u;
    // NOP
label_4a11f8:
    // 0x4a11f8: 0x10490004  beq         $v0, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A11F8u;
    {
        const bool branch_taken_0x4a11f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x4A11FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A11F8u;
        // 0x4a11fc: 0x24c40018  addiu       $a0, $a2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a11f8) {
            ctx->pc = 0x4A120Cu;
            goto label_4a120c;
        }
    }
    ctx->pc = 0x4A1200u;
    // 0x4a1200: 0x5448000c  bnel        $v0, $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x4A1200u;
    {
        const bool branch_taken_0x4a1200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x4a1200) {
            ctx->pc = 0x4A1204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A1200u;
            // 0x4a1204: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A1234u;
            goto label_4a1234;
        }
    }
    ctx->pc = 0x4A1208u;
    // 0x4a1208: 0x24c40018  addiu       $a0, $a2, 0x18
    ctx->pc = 0x4a1208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
label_4a120c:
    // 0x4a120c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a120cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a1210: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x4a1210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4a1214: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4a1214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4a1218: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a1218u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a121c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x4a121cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4a1220: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a1220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a1224: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a1224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a1228: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a1228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a122c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4a122cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4a1230: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x4a1230u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_4a1234:
    // 0x4a1234: 0x84c20008  lh          $v0, 0x8($a2)
    ctx->pc = 0x4a1234u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4a1238: 0x441ffef  bgez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x4A1238u;
    {
        const bool branch_taken_0x4a1238 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4a1238) {
            ctx->pc = 0x4A11F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a11f8;
        }
    }
    ctx->pc = 0x4A1240u;
label_4a1240:
    // 0x4a1240: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4A1240u;
    SET_GPR_U32(ctx, 31, 0x4A1248u);
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4A1240u, 0x4A1248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1248u;
label_4a1248:
    // 0x4a1248: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4a1248u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4a124c: 0x2445002c  addiu       $a1, $v0, 0x2C
    ctx->pc = 0x4a124cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x4a1250: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x4a1250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x4a1254: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4a1254u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a1258: 0x3c07c000  lui         $a3, 0xC000
    ctx->pc = 0x4a1258u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49152 << 16));
    // 0x4a125c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a125cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a1260: 0x2463c000  addiu       $v1, $v1, -0x4000
    ctx->pc = 0x4a1260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950912));
    // 0x4a1264: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x4a1264u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a1268: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4a1268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a126c: 0x861824  and         $v1, $a0, $a2
    ctx->pc = 0x4a126cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4a1270: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x4a1270u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x4a1274: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x4a1274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4a1278: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a1278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a127c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4a127cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4a1280: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4a1280u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x4a1284: 0x3e00008  jr          $ra
    ctx->pc = 0x4A1284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A1288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1284u;
        // 0x4a1288: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A1284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A128Cu;
    // 0x4a128c: 0x0  nop
    ctx->pc = 0x4a128cu;
    // NOP
    ctx->pc = 0x4a1290u;
}
