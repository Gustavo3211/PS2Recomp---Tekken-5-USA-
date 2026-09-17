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

// Function: sub_0030D1E8
// Address: 0x30d1e8 - 0x30d3c0
void sub_0030D1E8_0x30d1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D1E8_0x30d1e8");
#endif

    switch (ctx->pc) {
        case 0x30d33cu: goto label_30d33c;
        case 0x30d374u: goto label_30d374;
        default: break;
    }

    ctx->pc = 0x30d1e8u;

    // 0x30d1e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30d1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30d1ec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x30d1ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d1f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30d1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30d1f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30d1f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d1f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30d1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30d1fc: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x30d1fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30d200: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x30d200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x30d204: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x30d204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x30d208: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x30d208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30d20c: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x30d20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x30d210: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30d210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30d214: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x30d214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x30d218: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x30d218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x30d21c: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x30d21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x30d220: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x30d220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x30d224: 0x2403004a  addiu       $v1, $zero, 0x4A
    ctx->pc = 0x30d224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x30d228: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x30d228u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x30d22c: 0x24040049  addiu       $a0, $zero, 0x49
    ctx->pc = 0x30d22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x30d230: 0xfe280000  sd          $t0, 0x0($s1)
    ctx->pc = 0x30d230u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 8));
    // 0x30d234: 0x2407003b  addiu       $a3, $zero, 0x3B
    ctx->pc = 0x30d234u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x30d238: 0xfe250008  sd          $a1, 0x8($s1)
    ctx->pc = 0x30d238u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 5));
    // 0x30d23c: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x30d23cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x30d240: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x30d240u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x30d244: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x30d244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30d248: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x30d248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x30d24c: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30d24cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30d250: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x30d250u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x30d254: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x30d254u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
    // 0x30d258: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x30d258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x30d25c: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30d25cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30d260: 0x26110040  addiu       $s1, $s0, 0x40
    ctx->pc = 0x30d260u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x30d264: 0xfe240008  sd          $a0, 0x8($s1)
    ctx->pc = 0x30d264u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 4));
    // 0x30d268: 0x24040052  addiu       $a0, $zero, 0x52
    ctx->pc = 0x30d268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x30d26c: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30d26cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30d270: 0x26110050  addiu       $s1, $s0, 0x50
    ctx->pc = 0x30d270u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x30d274: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x30d274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x30d278: 0xfe280000  sd          $t0, 0x0($s1)
    ctx->pc = 0x30d278u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 8));
    // 0x30d27c: 0xfe250008  sd          $a1, 0x8($s1)
    ctx->pc = 0x30d27cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 5));
    // 0x30d280: 0x26110060  addiu       $s1, $s0, 0x60
    ctx->pc = 0x30d280u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x30d284: 0xfe260008  sd          $a2, 0x8($s1)
    ctx->pc = 0x30d284u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 6));
    // 0x30d288: 0x24060047  addiu       $a2, $zero, 0x47
    ctx->pc = 0x30d288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x30d28c: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30d28cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30d290: 0x26110070  addiu       $s1, $s0, 0x70
    ctx->pc = 0x30d290u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x30d294: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x30d294u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x30d298: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x30d298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30d29c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30d29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30d2a0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x30d2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x30d2a4: 0xfe270008  sd          $a3, 0x8($s1)
    ctx->pc = 0x30d2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 7));
    // 0x30d2a8: 0x26110080  addiu       $s1, $s0, 0x80
    ctx->pc = 0x30d2a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x30d2ac: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x30d2acu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
    // 0x30d2b0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x30d2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x30d2b4: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30d2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30d2b8: 0x26110090  addiu       $s1, $s0, 0x90
    ctx->pc = 0x30d2b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x30d2bc: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x30d2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x30d2c0: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x30d2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x30d2c4: 0xfe240008  sd          $a0, 0x8($s1)
    ctx->pc = 0x30d2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 4));
    // 0x30d2c8: 0x261100a0  addiu       $s1, $s0, 0xA0
    ctx->pc = 0x30d2c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x30d2cc: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x30d2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
    // 0x30d2d0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x30d2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30d2d4: 0x2407004c  addiu       $a3, $zero, 0x4C
    ctx->pc = 0x30d2d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x30d2d8: 0x8f83c54c  lw          $v1, -0x3AB4($gp)
    ctx->pc = 0x30d2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952268)));
    // 0x30d2dc: 0x8f82c550  lw          $v0, -0x3AB0($gp)
    ctx->pc = 0x30d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952272)));
    // 0x30d2e0: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x30d2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
    // 0x30d2e4: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x30d2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x30d2e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30d2e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30d2ec: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x30d2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x30d2f0: 0x261100b0  addiu       $s1, $s0, 0xB0
    ctx->pc = 0x30d2f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x30d2f4: 0xfe240008  sd          $a0, 0x8($s1)
    ctx->pc = 0x30d2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 4));
    // 0x30d2f8: 0x8f82c544  lw          $v0, -0x3ABC($gp)
    ctx->pc = 0x30d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952260)));
    // 0x30d2fc: 0x8f83c548  lw          $v1, -0x3AB8($gp)
    ctx->pc = 0x30d2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952264)));
    // 0x30d300: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30d300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30d304: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30d304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30d308: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30d308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30d30c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x30d30cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x30d310: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30d310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30d314: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x30d314u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x30d318: 0x261100c0  addiu       $s1, $s0, 0xC0
    ctx->pc = 0x30d318u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x30d31c: 0xfe250000  sd          $a1, 0x0($s1)
    ctx->pc = 0x30d31cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 5));
    // 0x30d320: 0xfe260008  sd          $a2, 0x8($s1)
    ctx->pc = 0x30d320u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 6));
    // 0x30d324: 0x261100d0  addiu       $s1, $s0, 0xD0
    ctx->pc = 0x30d324u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x30d328: 0xfe280008  sd          $t0, 0x8($s1)
    ctx->pc = 0x30d328u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 8));
    // 0x30d32c: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30d32cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30d330: 0x261100e0  addiu       $s1, $s0, 0xE0
    ctx->pc = 0x30d330u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x30d334: 0xc0c468c  jal         func_311A30
    ctx->pc = 0x30D334u;
    SET_GPR_U32(ctx, 31, 0x30D33Cu);
    ctx->pc = 0x30D338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D334u;
    // 0x30d338: 0xfe270008  sd          $a3, 0x8($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311A30u, 0x30D334u, 0x30D33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D33Cu;
label_30d33c:
    // 0x30d33c: 0x8f83c55c  lw          $v1, -0x3AA4($gp)
    ctx->pc = 0x30d33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952284)));
    // 0x30d340: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30d340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30d344: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x30d344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30d348: 0x4223c  dsll32      $a0, $a0, 8
    ctx->pc = 0x30d348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 8));
    // 0x30d34c: 0x4223a  dsrl        $a0, $a0, 8
    ctx->pc = 0x30d34cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 8);
    // 0x30d350: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x30d350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x30d354: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30d354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30d358: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30d358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30d35c: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x30d35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x30d360: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x30d360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x30d364: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x30d364u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x30d368: 0x261100f0  addiu       $s1, $s0, 0xF0
    ctx->pc = 0x30d368u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x30d36c: 0xc0c4696  jal         func_311A58
    ctx->pc = 0x30D36Cu;
    SET_GPR_U32(ctx, 31, 0x30D374u);
    ctx->pc = 0x30D370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D36Cu;
    // 0x30d370: 0xfe250008  sd          $a1, 0x8($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311A58u, 0x30D36Cu, 0x30D374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D374u;
label_30d374:
    // 0x30d374: 0x9f83c540  lwu         $v1, -0x3AC0($gp)
    ctx->pc = 0x30d374u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294952256)));
    // 0x30d378: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30d378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30d37c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x30d37cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30d380: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x30d380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x30d384: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x30d384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x30d388: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30d388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30d38c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30d38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30d390: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x30d390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30d394: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x30d394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x30d398: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30d398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d39c: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x30d39cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x30d3a0: 0x26110100  addiu       $s1, $s0, 0x100
    ctx->pc = 0x30d3a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x30d3a4: 0xfe240000  sd          $a0, 0x0($s1)
    ctx->pc = 0x30d3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 4));
    // 0x30d3a8: 0xfe200008  sd          $zero, 0x8($s1)
    ctx->pc = 0x30d3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 0));
    // 0x30d3ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30d3acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d3b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30d3b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30d3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x30D3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D3B4u;
        // 0x30d3b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D3B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D3BCu;
    // 0x30d3bc: 0x0  nop
    ctx->pc = 0x30d3bcu;
    // NOP
    ctx->pc = 0x30d3c0u;
}
